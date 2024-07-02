/**
 * @file lamp-demo.ino
 * @author tony Andrioli
 * @brief Het hoofdbestand van het project
 * @version 0.8
 * @date 2024-07-01
 */

/**
 * @mainpage Dimbare Lamp-demo project
 * 
 * Klein demo projectje als voorbeeld bij het vak H-NSE-PSE van de
 * Haagse Hogeschool. Het betreft hier een eerstejaars project.
 * 
 * Het lamp-demo project is een heel simpel projectje voor een MicroBit. Het is
 * een simulatie van een lamp die je kunt dimmen. Knop A zet de lamp aan en 
 * uit. Knop B laat meer of minder leds branden.
 * 
 * Het voornaamste doel van dit project is echter niet de functionaliteit maar,
 * om te laten zien hoe een afgerond project er voor dit vak uit moet zien. 
 * Naast de code vindt je bij dit project dus ook de ontwerpen en het testplan 
 * en testrapport.
 * 
 */

#include <Adafruit_Microbit.h>
#include "Lamp.h"

Lamp l;

void setup() {
  // Serial.begin(9600);
}

void loop() {
  l.update();
}
