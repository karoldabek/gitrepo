#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  napisy.py

def pobierz_dane1():
    imie = input('Podaj imię: ').strip()
    nazwisko = input('Podaj nazwisko: ').strip()
    print("Witaj {} {}!".format(imie.strip().capitalize(),
                                nazwisko.strip().capitalize()))
    
    imie = imie.strip()
    nazwisko = nazwisko.strip()
    if len(imie) > len(nazwisko):
        print("Imię > nazwiska")
    elif len(imie) < len(nazwisko):
        print("Imię < nazwisko")
    else:
        print("Imię == nazwisko")
    
    if imie[-1] == 'a':
        print("kobieta")
    else:
        print("mężczyzna")
    
    
def pobierz_dane2():
    nazwa = input("Imię i nazwisko: ").strip()
    while nazwa.count(' ') != 1:
        nazwa = input("Imię i nazwisko: ").strip()
    samogloski = set(['a', 'o', 'u', 'e', 'y', 'i', 'ę', 'ą'])
    inne = set([',', '.', '!', ' ', '\t', ', '])
    ileSp = 0
    ileSa = 0
    for znak in nazwa:
        if znak in samogloski:
            ileSa += 1
        elif znak not in inne:
            ileSp += 1
    if ileSa > ileSp:
        print("Spółgłoski > samogłoski")
    else:
        print("Samogłoski = spółgłoski")
    
def pobierz_dane3():
    napis1 = input("Tekst: ").strip()
    napis2 = ''
    inne = set([',', '.', '!', ' ', '\t', ', '])
    for znak in napis1:
        if znak not in inne and not znak.isdigit():
            if znak.islower():
                napis2 += znak.upper()
            else:
                napis2 += znak.lower()
        else:
            napis2 += znak
    print(napis2)
    
    
    
def main(args):
    #pobierz_dane2()
    pobierz_dane3()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
