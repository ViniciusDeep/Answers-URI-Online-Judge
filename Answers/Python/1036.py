# -*- coding: utf-8 -*-

import math
A, B, C = map(float, raw_input().split())

delta = (B*B) - (4.0*A*C)

if A > 0.0 and delta >= 0.0:
	raiz1 = (-B + math.sqrt(delta)) / (2.0*A)
	raiz2 = (-B - math.sqrt(delta)) / (2.0*A)

	print"R1 = %.5f" % raiz1
	print"R2 = %.5f" % raiz2

else:
	print "Impossivel calcular"	
