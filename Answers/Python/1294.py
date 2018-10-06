# -*- coding: utf-8 -*-

import math
while True:
	try:
		lados = raw_input().split()

		ladomaior = 0
		ladomenor = 0


		if float(lados[0]) >= float(lados[1]):
			ladomaior = float(lados[0])
			ladomenor = float(lados[1])
		else:
			ladomaior = float(lados[1])
			ladomenor = float(lados[0])
		caso1 = ladomenor/2
		caso2 = 0.0

		a = 12
		b = (-4 * ladomaior) + (-4 * ladomenor)
		c = ladomaior * ladomenor
		delta = (b**2) - (4*a*c)
		x1 = (-b + math.sqrt(delta)) / (2*a)
		x2 = (-b - math.sqrt(delta)) / (2*a)


		if ((-4*ladomenor) + (-4*ladomaior) + 24*x1) >= 0:
			print "%.3f %.3f %.3f" % (x2, caso2, caso1)
		else:
			print "%.3f %.3f %.3f" % (x1, caso2, caso1)
	except:
		break
