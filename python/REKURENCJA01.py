#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  REKURENCJA01.py
import turtle


def rysuj_it(ile, bok, kat):
    for i in range(ile):
        turtle.forward(bok)
        turtle.right(kat)


def rysuj_rek(ile, bok, kat):
    if ile < 1:
        return        #wracamy jeśli ile < 1
    turtle.forward(bok)
    turtle.right(kat)
    rysuj_rek(ile - 1, bok, kat)     #wywołujeny ją samą to jest rekurencja


def main(args):
    turtle.setup(800, 600)
    rysuj_rek(4, 200, 90)
    turtle.done()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
