/**
 * @file Licht.cpp
 * @author Tony Andrioli
 * @brief De implementatie van de Licht klasse
 * @version 0.1
 * @date 2024-07-01
 * 
 * Deze klasse gebruit de LED's van de MicroBit als imsulatie van de lamp. Er
 * zijn nu 3 standen maar dit is uitbreidbaar.
 * 
 */
#include "Licht.h"

Licht::Licht() {
  aantalStanden = 4;
  stand = UIT;
  microbit.begin();
};

int Licht::geefAantalStanden(): microbit() {
  return aantalStanden;
};

void Licht::uit() {
  stand = UIT;
  microbit.clear();
};

void Licht::aan( int newstand ) {
  if (newstand == LAAG) 
      stand = LAAG;
  else if (newstand == MIDDEL) 
      stand = MIDDEL;
  else if (newstand == HOOG) 
      stand = HOOG;
  else if (newstand == UIT) 
      stand = LAAG;

  microbit.show( plaatjes[stand -1] );
};

void Licht::aan(  ) {
  aan(stand);
}

int Licht::geefStand() {
  return stand;
};
