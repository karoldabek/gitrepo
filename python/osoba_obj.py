#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  osoba_obj.py

class Osoba:
    """Prosta klasa opisująca osobę""" #dla nas
    
    def __init__(self, imie, nazwisko):
        self.imie = imie
        self.nazwisko = nazwisko
        self.ustawPlec()
        self.wiek = 0
        
    def ustawPlec(self):
        if self.imie[-1] == 'a':
            self.plec = 'k'
        else:
            self.plec = 'm'

def main(args):
    o1 = Osoba('Adam', 'Słodowy')
    o1.wiek = 23
    o2 = Osoba('Ewa', 'Kos')
    o2.wiek = 20
    
    print(o1.imie, o1.nazwisko, o1.plec)
    print(o2.imie, o2.nazwisko, o2.plec)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
