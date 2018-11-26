#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  suma_liczby.py
#program sumuje liczby nieparzste w podanym zakresie


def main(args):
    n = int(input("Podaj zakres dolny:"))
    m = int(input("Podaj zakres górny:"))
    suma = 0
    for liczba in range(n, m + 1):
        if not liczba % 2:
            suma = suma + liczba
    print("suma liczb w zakresie <{}, {}> wynosi {}".format(n, m, suma))
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
