#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  bez nazwy.py
import turtle

def main(args):
    turtle.setup(800, 600)
    for i in range(5):
        turtle.forward(200)
        turtle.right(144)
    turtle.done()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
