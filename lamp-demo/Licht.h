/**
 * @file Licht.h
 * @author Tony Andrioli
 * @brief De Licht klasse, gebruit de LED's van de MicroBit als 'lamp'.
 * @version 0.8
 * @date 2024-07-01
 *
 * Deze klasse gebruit de LED's van de MicroBit als simulatie van de lamp. Er
 * zijn nu 3 standen maar dit is uitbreidbaar.
 */

#ifndef __LICHT_H__
#define __LICHT_H__

#include <Adafruit_Microbit.h>

/**
 * @brief De licht-klasse die de LED's aanstuurt.
 *  
 * Het Licht heeft 4 standen: UIT, LAAG, MIDDEL en HOOG.
 */
class Licht {
  public:
    static const int UIT = 0;   /**< De uit stand */
    static const int LAAG = 1;  /**< Dstand waarbij er 1 LED-je brand*/
    static const int MIDDEL= 2; /**< Dstand waarbij er 9 LEDjes branden*/
    static const int HOOG = 3;  /**< Dstand waarbij er25 LEDjes branden*/

    /**
     * @brief Construct a new Licht object
     */
    Licht();
    /**
     * @brief Geeft het aantal standen die de lamp heeft
     * 
     * @return int het aantal standen
     */
    int geefAantalStanden();
    /**
     * @brief Zet de lamp uit
     */
    void uit();
    /**
     * @brief Zet de lamp aan in een gegeven stand
     * 
     * @param newstand De stand waarin de lampgezet wordt 
     */
    void aan( int newstand );
    /**
     * @brief Zet de lamp aan in de laatst bekende stand.
     * Bij het opstarten van het programma is de stand LAAG
     */
    void aan();
    /**
     * @brief Geef de stand waarin de lamp staat.
     * 
     * @return int De huidige stand van de lamp
     */
    int geefStand();

  private:
    /* De 'plaatjes' die bij de standen horen */
    const uint8_t plaatjes[3][5] = { 
      { B00000,
        B00000,
        B00100,
        B00000,
        B00000 },

      { B00000,
        B01110,
        B01110,
        B01110,
        B00000 },

      { B11111,
        B11111,
        B11111,
        B11111,
        B11111 }
      };
    int aantalStanden;   /* het maximaal aantal standen van de lamp */
    int stand;           /* de huidige stand*/
    Adafruit_Microbit_Matrix microbit; /* het MicroBit matrix object wat de lamp simuleert.*/

};

#endif