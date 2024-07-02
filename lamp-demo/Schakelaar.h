/**
 * @file Schakelaar.h
 * @author Tony Andrioli
 * @brief Een schakelaar: een knop met 2 standen aan en uit 
 * @version 0.8
 * @date 2024-07-01
 * 
 * Een schakelaar is gekoppeld aan een @ref Licht object via zijn parent. Hij
 * zal dat licht aan- en uit-zetten
 */

#ifndef __SCHAKELAAR_H__
#define __SCHAKELAAR_H__

#include "Standenknop.h"

/**
 * @brief Een schakelaat voor aan en uit.
 * 
 * Subklasse van @ref StandenKnop, maar dan dus met 2 standen. 
 * Een schakelaar is gekoppeld aan een @ref Licht object via zijn parent. Hij
 * zal dat licht aan- en uit-zetten
 */
class Schakelaar: public StandenKnop {
  public:
    /**
     * @brief Construct a new Schakelaar object
     * 
     * @param knopnr  'A' of 'B' voor een van de knoppen van de Microbit 
     * @param teSchakelen Het \ref Licht wat je wilt dimmen
     */
    Schakelaar(char knopnr, Licht& teSchakelen);
    /**
     * @brief Vertelt je of deschakelaar aan staat.
     * 
     * @return true De schakelaar is aan
     * @return false De schakelaat ui uit
     */
    bool isAan();
    /**
     * @brief Kijk of op knop gedrukt is en zet het licht zonodig aan of uit.
     * 
     * @return int De huidige stand van de knop, 0 of 1
     */
    int update() override;
};

#endif