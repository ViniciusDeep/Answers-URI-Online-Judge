# -*- coding: utf-8 -*-

c1, n1, p1 =  map(float, raw_input().split())
c2, n2, p2 =  map(float, raw_input().split())

TOTAL = (n1*p1)+(n2*p2)

print("VALOR A PAGAR: R$ %.2f" %TOTAL)