/** 
 * @file Dimmer.h
 * @brief De dimmerknop, dwz een knop die na elke keer drukken de stand veranderd.
 * @author Tony Andrioli
 * @version 0.8
 * @date 2024-07-01
 * 
 * Dimmer is een subclass van @ref StandenKnop. Bij elke keer dat je op de knop
 * drukt verandert de stand van de knop. 
 * Als de stand verandert, wordt het @ref Licht in de betreffende stand gezet.
 */

#ifndef __DIMMER_H__
#define __DIMMER_H__

#include "Standenknop.h"

/**
 * @brief De dimmer class.
 * 
 * De dimmerknop, dwz een knop die na elke keer drukken de stand veranderd.
 * Als de stand verandert, wordt het @ref Licht waaraan hij via zijn parent aan
 * gekoppeld is, in de betreffende stand gezet.
 */
class Dimmer: public StandenKnop {
  public:

    /**
     * @brief Construct a new Dimmer object
     * 
     * @param knopnr  'A' of 'B' voor een van de knoppen van de Microbit 
     * @param standen Het aantal standen waarin je de knop wilt zetten
     * @param teSchakelen Het \ref Licht wat je wilt dimmen
     */
    Dimmer(char knopnr, int standen, Licht& teSchakelen);

    /**
     * @brief Kijk of op knop gedrukt is en update het licht.
     * 
     * @return int De stand waar de knop na afloop in staat 
     */
    int update() override;
};

#endif