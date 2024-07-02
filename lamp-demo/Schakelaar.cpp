/**
 * @file Schakelaar.cpp
 * @author Tony Andrioli
 * @brief De implementatie van de schakelaar
 * @version 0.8
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
  bool oud = isAan();
  int destand = StandenKnop::update();

  if (oud != destand) {
    Serial.println("schakelaar update");
    if (isAan()) {
      led.aan();
    } else {
      led.uit();
    }
    Serial.println("schakelaar update end");
  }
  return destand; 
};
