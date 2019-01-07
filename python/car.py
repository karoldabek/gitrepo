#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  car.py
from datetime import date

from osoba_obj import Osoba

class Kierowca(Osoba):
    
    __licznik = 0  # atrybut klasy
    
    def __init__(self, imie, nazwisko, kategoria):
        super().__init__(imie, nazwisko)
        self.kategoria = kategoria
        Kierowca.__licznik += 1
    
        
    def __del__(self):
        Kierowca.__licznik -= 1
        
    @staticmethod  # metoda statyczna
    def KierowcaLicz():
        return Kierowca.__licznik
        
        
class Samochod:
    
    def __init__(self, marka, model, rocznik):
        self.marka = marka
        self.model = model
        self.rok = rocznik
        
    def wiek(self):
        dzis = date.today()
        return dzis.year - self.rok
    
        
def main(args):
    s1 = Samochod('Fiat', 'Tipo', 2000)
    s2 = Samochod('Peugeot', '308', 2007)
    print(s1.model, s1.wiek())
    print(s2.model, s2.wiek())

    k1 = Kierowca('Adam', 'Słodowy', 'B')
    print(k1.imie, k1.kategoria)
    print(k1.KierowcaLicz())
    
    k2 = Kierowca('Ewa', 'Bąk', 'BC')
    print(k2.KierowcaLicz())
    
    k3 = Kierowca('Bartek', 'Dąb', 'BC')
    print(k3.KierowcaLicz())
    k3.licznik = 10
    
    del(k2)
    del(k3)
    print(k1.KierowcaLicz())
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
