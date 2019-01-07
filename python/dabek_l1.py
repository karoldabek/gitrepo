#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  l1.py


def main(args):
    n = int(input("Podaj liczę:"))
    i = 2
    if i * i <= n:
        if n % 1 == 0:
            print("Liczba złożona")
    else:
        print("liczbę pierwszą")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
