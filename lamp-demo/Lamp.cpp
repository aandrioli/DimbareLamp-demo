/**
 * @file Lamp.cpp
 * @author Tony Andrioli
 * @brief Implementatie van de lamp klasse
 * @version 0.1
 * @date 2024-07-01
 */

#include "Lamp.h"

Lamp::Lamp(): lichtje(), aanuitKnop('A', lichtje), dimKnop('B', lichtje.geefAantalStanden() -1, lichtje ) {
}

void Lamp::update() {
  aanuitKnop.update();
  dimKnop.update();
}

