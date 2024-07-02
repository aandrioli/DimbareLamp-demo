/**
 * @file Schakelaar.cpp
 * @author Tony Andrioli
 * @brief De implementatie van de schakelaar
 * @version 0.1
 * @date 2024-07-01
 * 
 * Onderdeel van het lamp-demo project.
 */

#include "schakelaar.h"

Schakelaar::Schakelaar(char knopnr, Licht& teSchakelen): StandenKnop(knopnr, 2, teSchakelen) {
};

bool Schakelaar::isAan() {
  return getStand() > 0;
};

int Schakelaar::update() {
  int destand = StandenKnop::update();
  if (isAan())
    led.aan();
  else
    led.uit();
  return destand; 
};
