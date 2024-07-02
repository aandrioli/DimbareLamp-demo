/**
 * @file Lamp.cpp
 * @author Tony Andrioli
 * @brief Implementatie van de lamp klasse
 * @version 0.8
 * @date 2024-07-01
 */

#include "Lamp.h"

Lamp::Lamp() {
  lichtje = new Licht();
  aanuitKnop = new Schakelaar('A', *lichtje);
  dimKnop = new Dimmer('B', 3, *lichtje );
}

Lamp::~Lamp() {
  delete lichtje;
  delete aanuitKnop;
  delete dimKnop;
}

void Lamp::update() {
  aanuitKnop->update();
  dimKnop->update();
}

