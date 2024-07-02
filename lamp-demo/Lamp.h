/**
 * @file Lamp.h
 * @author Tony Andrioli
 * @brief Het lamp object
 * @version 0.1
 * @date 2024-07-01
 */
#ifndef __LAMP_H__
#define __LAMP_H__

#include "Licht.h"
#include "Schakelaar.h"
#include "Dimmer.h"

/**
 * @brief Een Lamp object bevat aggregaties naar de knoppen en het licht. 
 * 
 * Het lamp object creert de knop-klassen en de licht-klasse, en koppelt deze
 * aan elkaar. Verder is er enkel een update functie die het update verzoek 
 * doorstuurt naar de knoppen. 
 */
class Lamp {
  public:
    /**
     * @brief Construct a new Lamp object
     */
    Lamp();
    /**
     * @brief Update de status van de lamp. 
     * Een druk op een knop van de lamp heeft pas effect nadat update is
     * aangeroepen.
     */
    void update();

  private:
    Licht lichtje;         /* Het lichtje van de lamp */
    Schakelaar aanuitKnop; /* De aanuit knop om de kamp mee aan en uit te zetten */
    Dimmer dimKnop;        /* De knop om de lamp mee te dimmen */ 
};

#endif