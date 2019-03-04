#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  palindromy.py
import os


def czy_palindrom(tekst):
    ile = len(tekst)
    for i in range(ile // 2):
        if tekst[i] != tekst[-i-1]:
            return False
    return True


def czytaj_dane(plik):
    if not os.path.exists(plik):
        print('Plik niedostępny!')
        return False
    tekst = []
    with open(plik, "r") as f:
        for linia in f:
            tekst.append(linia.strip())
    return tekst


def main(args):
    # tekst = input('Podaj tekst: ')
    tekst = czytaj_dane('dane01.txt')
    print(tekst)
    ile = 0
    
    # ~if czy_palindrom(tekst):
        # ~print('To palindrom! ')
    # ~else:
        # ~print('To nie palindrom! ')
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
