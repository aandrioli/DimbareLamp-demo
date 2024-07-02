# Testplan "Dimbare Lamp"

## 1 Inleiding

Net zoals het ontwerprapport bij dit project beknopt en overzichtelijk is, is dit testplan dat ook. Het is immers maar een klein demo projectje, met beperkte functionaliteit.

Als je wilt weten hoe omvangrijk en uitgebreid testplannen worden in professionele projecten... Google op "Test Plan System and Acceptance Tests tempalte TMAP". Er is een document "Sjabloon Testplan Systeem en Acceptatietesten TMap NEXT 0.doc". Dit templat vult al 21 pagina's. En ... het gaat alleen nog maat over de acceptatie test.

## 2 TestBasis

Dit testplan beschrijft de black-box acceptatietesten. De testcases zijn verkregen uit de Use-case baschrijvingen zoals die in het ontwerprapport zijn opgenomen. Dit is in paragraaf 2.1 over genomen

### 2.1 Use Cases

Analyse met bewoners heeft opgeleverd dat er 2 use-cases zijn: Een lamp aan of uit zetten, en een lamp dimmen.

![use case diagram](usecase_diagram.png)

---

**use case**:                  Lamp aan/uit zetten  
**Korte omschrijving**:        Zet de lamp aan of uit  
**Aannamen (precondities)**:   Er staat stroom op de lamp  
**Resultaat (postcondities)**: De lamp staat aan danwel uit, naar gelang de bewoner dat wenst.  
**Fout situaties**:            -  
**Systeem status na fout**:    -  
**Actoren**:                   Bewoner  
**Trigger**:                   De bewoner wenst licht, terwijlde lamp uit staat. Of de lamp staat aan, en de bewoner went geen extra licht.  
**Beschrijving (main flow)**  

- De bewoner drukt op knop A  
- Als het licht aan was, zal het licht uit gaan. Als het licht uit was, zal het licht aan gaan.  
- De bewoner kijkt of hij nu tevreden is met de hoeveelheid licht (1).  

**Alternatieve flow**          (1) Als de bewoner niet tevreden is met de ingestelde hoeveelheid licht, kan de lamp meer of minder gedimd worden. Zie usecase 'Dimstand aanpassen'

---

**use case**:                  Dimstand aanpassen  
**Korte omschrijving**:        Pas de felheid van de lamp aan  
**Aannamen (precondities)**:   Er staat stroom op de lamp  
**Resultaat (postcondities)**: De felheid van de lamp is ingesteld zoals de bewoner dat wenst.  
**Fout situaties**:            -  
**Systeem status na fout**:    -  
**Actoren**:                   Bewoner  
**Trigger**:                   De bewoner wenst dat de lamp feller of minder fel staat ingesteld.  
**Beschrijving (main flow)**:  

a. De bewoner drukt op knop B
a. Als het licht aan is:

   - Als het licht op zijn felst stond, zal het op zijn zwakst gaan branden.
   - Anders zal het licht iets feller gaan branden.
   - Er zijn 3 standen waartussen geswitcht wordt.

   Als het licht uit is zal gewisseld worden tussen dezelfde 3 standen, maar nu zal het licht ook kort aangaan in de nieuwe ingestelde stand.

a. De bewoner kijkt of hij nu tevreden is met de hoeveelheid licht, en herhaal de stappen vanaf stap a indien gewenst.  

**Alternatieve flow**:         Als de bewoner minder licht wil dan in de laagste stand van de dimmer, kan de lamp uit gezet worden. Zie use-case 'Lamp aan/uit zetten'.

---

## 3 Testvoorbereiding

De testen zijn nadat deze voorbereiding is uitgevoerd door ieder persoon uit te voeren, die Nederlands kan lezen. Immers de bedoeling van een lamp is ook dat iedereen die kan gebruiken.

1. Zorg dat de batterijen zijn aangesloten op de Microbit.
1. Zorg dat de code van dit project correct is geinstalleerd op de Microbit.
1. Zorg dat de Microbit aan staat.

## 4. Testcases

Tenzij anders vermeld, zijn de testcases zo beschreven dat ze in volgorde uitgevoerd kunnen worden. Dat wil zeggen dat de eindsituatie ven een geslaagde test, ook de beginsituatie is van de volgende test.

### Testcase 1.a

------------------------ -----------------------------------------------------
use case                 Lamp aan/uit zetten

Test doel                Testen of de lamp aan gaat

Voorbereiding            Duk op de reset button van de Microbit

Testcase beschrijving    De lamp is uit. \
                         Druk op knop A van de MicroBit

Verwacht resultaat       Het middelste ledje opde MicroBit zal aan gaan
------------------------ -----------------------------------------------------

### Testcase 1.b

------------------------ -----------------------------------------------------
use case                 Lamp aan/uit zetten

Test doel                Testen of de lamp uit gaat

Voorbereiding            Zet de lamp aan. 1 led brand. \
                         Dit is de situatie na testcase 1.a.

Testcase beschrijving    Druk op knop A van de MicroBit

Verwacht resultaat       Het middelste ledje opde MicroBit zal weer uit gaan
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
------------------------ -----------------------------------------------------
