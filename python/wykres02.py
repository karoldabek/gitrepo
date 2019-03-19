#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  wykres02.py
import matplotlib.pyplot as plt   # as - my chcemy ten plik zaimportować w nazwie plt
from matplotlib.mlab import frange

def main(args):
    x = frange(-1, 2, 0.15)
    # f(x) = x/(x+2) dla x >= 1
    # f(x) = x * x/3 dla x > 0 i x < 1
    # f(x) = x / -3 dla x <= 0 
    y = []
    for el in x:
        if el <= 0:
            y.append(el / -3)
        elif el < 1:                      # nie mogą być dawa if
            y.append(el * el / 3)
        else:
            y.append(el / (el + 2))
        
    
    plt.plot(x, y)
    plt.title('Wykres f(x)')
    plt.grid(True)
    plt.show()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
