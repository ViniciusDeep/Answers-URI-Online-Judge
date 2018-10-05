# -*- coding: utf-8 -*-

ndias = int(input())

anos = ndias/365
meses = ndias%365 / 30
dias = (ndias%365) % 30

print"%i ano(s)" % anos
print"%i mes(es)" % meses
print"%i dia(s)" % dias