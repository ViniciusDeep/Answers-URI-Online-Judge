# -*- coding: utf-8 -*-

n1, n2, n3 = map(float, raw_input().split())

p = n1 + n2 + n3
area = ((n1 + n2) / 2 ) * n3

if abs(n2 - n3) < n1 < (n2 + n3):
	print"Perimetro = %.1f" %p
else:
	print"Area = %.1f" %area
	