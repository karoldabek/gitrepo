#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# pentla-suma.py


def main(args):
    suma = 0
    # pętla for powtarza się określoną ileość razy
    for i in range(1, 101, 2):
        print(suma)
        suma += i
        #suma = suma + i
    print() # wydruk pustego wiersza
    print("suma liczb <0;100>", suma)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
