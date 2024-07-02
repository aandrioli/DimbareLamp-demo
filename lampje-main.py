from microbit import *

class Licht:
    UIT    = 0
    LAAG   = 1
    MIDDEL = 2
    HOOG   = 3
    
    def __init__(self):
        self.__plaatjes = (Image('00000:'
                                 '00000:'
                                 '00900:'
                                 '00000:'
                                 '00000'),
                           Image('00000:'
                                 '09990:'
                                 '09990:'
                                 '09990:'
                                 '00000'),
                           Image('99999:'
                                 '99999:'
                                 '99999:'
                                 '99999:'
                                 '99999'))
        self.__aantalStanden = 4
        self.__stand = self.UIT

    def geefAantalStanden(self):
        return self.__aantalStanden
        
    def uit(self):
        self.__stand = self.UIT;
        display.clear()

    def aan(self, stand: int = -1) -> None:
        if stand == self.LAAG: 
            self.__stand = self.LAAG
        elif stand == self.MIDDEL: 
            self.__stand = self.MIDDEL
        elif stand == self.HOOG: 
            self.__stand = self.HOOG
        elif self.__stand == self.UIT: 
            self.__stand = self.LAAG
            
        display.show( self.__plaatjes[self.__stand -1])

    def geefStand(self):
        return self.__stand
        

class StandenKnop():
    def __init__(self, knopnr: str, standen: int, teSchakelen:Licht) -> None:
        if knopnr == 'A' or knopnr == 'a':
            self.__button = button_a
        else:
            self.__button = button_b
        self.__maxstand = standen
        self.__stand = 0
        self._led = teSchakelen
        
    def update(self) -> int:
        self.__stand = self.__stand + self.__button.get_presses() 
        self.__stand = self.__stand % self.__maxstand
        return self.__stand

    def stand(self) -> int:
        return self.__stand

class Schakelaar(StandenKnop):
    def __init__(self, knopnr:str, teSchakelen:Licht) -> None:
        super().__init__(knopnr, 2, teSchakelen)
        
    def update(self):
        """ check of schakelaarstand veranderd is. """
        super().update()
        if self.isAan():
            self._led.aan()
        else:
            self._led.uit()
        
    def isAan(self) -> bool:
        return self.stand() > 0

class Dimmer(StandenKnop):
    def __init__(self, knopnr:str, standen:int, teSchakelen:Licht) -> None:
        super().__init__(knopnr, standen, teSchakelen)
        
    def update(self):
        """ check of schakelaarstand veranderd is. """
        vorige = self.stand()
        super().update()
        
        if self._led.geefStand() > 0:
            self._led.aan(self.stand()+1)
        elif vorige != self.stand():
            self._led.aan(self.stand()+1)
            sleep(150)
            self._led.uit()      
                   
class Lamp:
    """ de dimbare lamp """
    
    def __init__(self) -> None:
        """ Initiaisaties """
        self.lichtje = Licht()
        self.aanUitKnop = Schakelaar('A', self.lichtje)
        self.dimKnop = Dimmer('B', self.lichtje.geefAantalStanden() - 1, self.lichtje)

    def loop(self) -> None:
        """ main loop van de applicatie """
        
        while True:
            pass
            self.aanUitKnop.update()
            self.dimKnop.update()

Lamp().loop()