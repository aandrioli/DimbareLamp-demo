/**
 * @file Licht.cpp
 * @author Tony Andrioli
 * @brief De implementatie van de Licht klasse
 * @version 0.8
 * @date 2024-07-01
 * 
 * Deze klasse gebruit de LED's van de MicroBit als imsulatie van de lamp. Er
 * zijn nu 3 standen maar dit is uitbreidbaar.
 * 
 */
#include "Licht.h"

Licht::Licht() : microbit() {
  aantalStanden = 4;
  stand = UIT;
  microbit.begin();
};

int Licht::geefAantalStanden() {
  return aantalStanden;
};

void Licht::uit() {
  if (stand != UIT) { 
    stand = UIT;
    microbit.clear();
  }
};

void Licht::aan( int newstand ) {
  if ((stand != UIT) && (stand == newstand)) 
    return;

  if (newstand == LAAG) { 
    stand = LAAG;
  }
  else if (newstand == MIDDEL) {
    stand = MIDDEL;
  }
  else if (newstand == HOOG) {
    stand = HOOG;
  }
  else if (newstand == UIT) {
    stand = LAAG;
  }

  microbit.show( plaatjes[stand -1] );
};

void Licht::aan() {
  if (stand != UIT)
    aan(stand);
  else
    aan(LAAG);
}

int Licht::geefStand() {
  return stand;
};
