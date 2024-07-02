#include "delay.h"
/**
 * @file Standenknop.cpp
 * @author Tony Andrioli
 * @brief De implementatie van een knop die in verschillende standen kan staan
 * @version 0.8
 * @date 2024-07-01
 */

#include "Standenknop.h"

StandenKnop::StandenKnop(char knopnr, int standen, Licht& teSchakelen): led(teSchakelen) {
  if ((knopnr == 'A') || (knopnr == 'a'))
      button = PIN_BUTTON_A;
  else
      button = PIN_BUTTON_B;
  pinMode(button, INPUT);

  maxstand = standen;
  stand = 0;
  pressed = false;
};
        
int StandenKnop::update() {
  if (! digitalRead(button) ) {
    pressed = true;
    delay(10);
  } else {
    if (pressed) {
      pressed = false;
      stand = stand + 1;
    }
  }
  stand = stand % maxstand;
  return stand;
};

int StandenKnop::getStand() {
  return stand;
};
