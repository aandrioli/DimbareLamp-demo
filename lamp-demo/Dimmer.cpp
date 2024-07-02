/**
 * @file Dimmer.cpp
 * @author Tony Andrioli
 * @brief De implementatie van de Dimmer
 * @version 0.1
 * @date 2024-07-01
 * 
 * Onderdeel van het lamp-demo project.
 */

#include "Dimmer.h"

Dimmer::Dimmer(char knopnr, int standen, Licht& teSchakelen): StandenKnop(knopnr, standen, teSchakelen) {
};

int Dimmer::update() {
  int vorige = getStand();
  int destand = StandenKnop::update();

  if (led.geefStand() > 0)
      led.aan(getStand()+1);
  else {
    if (vorige != getStand())
      led.aan(getStand()+1);
      delay(150);
      led.uit();  
  }  
  return destand; 
};
