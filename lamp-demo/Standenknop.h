/**
 * @file Standenknop.h
 * @author Tony Andrioli
 * @brief Een knop die in een willekeurig aantal standen gezet kan worden, en gekoppeld is aan een @ref Licht
 * @version 0.8
 * @date 2024-07-01
 */

#ifndef __STANDENKOP_H__
#define __STANDENKOP_H__

# include "Licht.h"

/**
 * @brief De klasse voor de Standenknop.
 * 
 * Een knop die in een willekeurig aantal standen gezet kan worden, en gekoppeld is aan een @ref Licht
 */
class StandenKnop {
  public:
    /**
     * @brief Construct a new Standen Knop object
     * 
     * @param knopnr  'A' of 'B' voor een van de knoppen van de Microbit 
     * @param standen Het aantal standen waarin je de knop wilt zetten
     * @param teSchakelen Het \ref Licht wat je wilt dimmen
     */
    StandenKnop(char knopnr, int standen, Licht& teSchakelen);

    /**
     * @brief Kijk of op knop gedrukt is en pas de stand zonodig aan.
     * 
     * Het indrukken van de knop 'telt' pas als de knop losgelaten wordt.Dus technisch gesproken wordt gekeken of de knop is losgelaten.
     * @return int De stand waarin de knop na afloop staat.
     */
    virtual int update();
    /**
     * @brief Geef de stand waar de knop in staat
     * 
     * @return int De huidige stand van de knop. Als het maximaal aantal standen n is, ligt de returnwaarde in de range [0..(n-1)]
     */
    int getStand();

  private:
    int button;     /* De knop 'A' of 'B' die gebruikt wordt. */
    int maxstand;   /* Het maximaal aantal standen waarin de knop kan staan*/
    int stand;      /* De huidige stand van de knop*/
    bool pressed;   /* True als de knop is ingedrukt. */

  protected:
    /** Het Licht wat gedimt wordt */
    Licht& led;
};

#endif