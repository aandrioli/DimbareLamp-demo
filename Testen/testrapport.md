# Testrapport "Dimbare Lamp"

## 1 Inleiding

De testen zijn volgens het testplan "Testplan Dimbare Lamp". De testen zijn uitgevoerd door Tony in de rol van bewoner. 

## 2. Testcases

Tenzij anders vermeld, zijn de testcases zo beschreven dat ze in volgorde uitgevoerd kunnen worden. Dat wil zeggen dat de eindsituatie ven een geslaagde test, ook de beginsituatie is van de volgende test.

### Testcase 1.a

------------------------ -----------------------------------------------------
use case                 Lamp aan/uit zetten

Test doel                Testen of de lamp aan gaat

Voorbereiding            Duk op de reset button van de Microbit

Testcase beschrijving    De lamp is uit. \
                         Druk op knop A van de MicroBit

Verwacht resultaat       Het middelste ledje opde MicroBit zal aan gaan

Resultaat                Geslaagd, resultaat als verwacht.

Opmerking                geen
------------------------ -----------------------------------------------------

### Testcase 1.b

------------------------ -----------------------------------------------------
use case                 Lamp aan/uit zetten

Test doel                Testen of de lamp uit gaat

Voorbereiding            Zet de lamp aan. 1 led brand. \
                         Dit is de situatie na testcase 1.a.

Testcase beschrijving    Druk op knop A van de MicroBit

Verwacht resultaat       Het middelste ledje opde MicroBit zal weer uit gaan

Resultaat                Geslaagd, resultaat als verwacht.

Opmerking                geen
------------------------ -----------------------------------------------------

### Testcase 2.a

------------------------ -----------------------------------------------------
use case                 Dimstand aanpassen

Test doel                Testen van de dimmer als de lamp uit staan

Voorbereiding            De lamp is uit. De lamp staat in de laagste dim-stand \
                         Dit is de situatie na testcase 1.b

Testcase beschrijving    Druk 2x kort op knop B van de MicroBit.

Verwacht resultaat       Na de eerste keer drukken, zullen 9 led's kort \
                         oplichten, en de twede keer drukken lichten alls 25 \
                         led's kort op. Hierna is de lamp weer uit.

Resultaat                Geslaagd, resultaat als verwacht.

Opmerking                geen
------------------------ -----------------------------------------------------

### Testcase 2.b

------------------------ -----------------------------------------------------
use case                 Dimstand aanpassen

Test doel                Testen of de dimstand onthouden wordt als de lamp \
                         uit staat, maar wel onder stroom blijft.

Voorbereiding            De lamp is uit. De lamp staat in de hoogste dim-stand \
                         Dit is de situatie na testcase 2.a

Testcase beschrijving    Druk op knop A van de MicroBit.

Verwacht resultaat       De lamp staat aan in de hoogste dimstand.

Resultaat                Geslaagd, resultaat als verwacht.

Opmerking                De bewoner geeft aan dat de lamp kort fel oplicht, 
                         en dat is vervelend.
------------------------ -----------------------------------------------------

### Testcase 2.c

------------------------ -----------------------------------------------------
use case                 Dimstand aanpassen

Test doel                Testen of de dimstand aangepast wordt als de lamp \
                         aan staat.

Voorbereiding            De lamp is aan. De lamp staat in de hoogste dim-stand \
                         Dit is de situatie na testcase 2.b

Testcase beschrijving    Druk 2x op knop B van de MicroBit.

Verwacht resultaat       Na de eerste keer drukken, 9 zal de lamp in de \
                         laagste dimstand staan, en zal 1 led branden. \
                         Na de twede keer branden 9 led's (middelste \
                         dimstand).

Resultaat                Geslaagd, resultaat als verwacht.

Opmerking                geen        
------------------------ -----------------------------------------------------

### Testcase 2.d

------------------------ -----------------------------------------------------
use case                 Dimstand aanpassen

Test doel                Resetten van de lamp.

Voorbereiding            De lamp is aan. De lamp staat in de middelste dim-stand \
                         Dit is de situatie na testcase 2.c

Testcase beschrijving    Koppel de lamp los van de batterij.\
                         Wacht 5 tellen en sluit de lamp weer aan.\
                         Druk 1 keer op knop A

Verwacht resultaat       De lamp is de ingestelde dimstand vergeten. De lamp\
                         staat nu aan in de laagste dim-stand (1 led brand).

Resultaat                Geslaagd, resultaat als verwacht.

Opmerking                De bewoner geeft aan dat het mooi zou zijn als de
                         dimstand bewaard zou kunnen worden.
------------------------ -----------------------------------------------------

## 3. Conclusie

Alle test zijn geslaagd. Wel heeft de bewoner wensen aangegeven, maar deze vielen niet binnen de huidige opdracht. Binnen deze opdracht zullen die wensen niet vervuld worden, eventueel zouden ze wel meegenomen kunnen worden als wordt besloten tot een vervolgopdracht. 