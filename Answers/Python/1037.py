# -*- coding: utf-8 -*-

n = float(raw_input())

if n > 100.0 or n < 0.0:
	print "Fora de intervalo"
else:
	if 0.0 <= n <=25.0:
		print "Intervalo [0,25]"
	
	if 25.0 < n <=50.0:
		print "Intervalo (25,50]"
	
	if 50.0 < n <=75.0:
		print "Intervalo (50,75]"
	
	if 75.0 < n <=100.0:
		print "Intervalo (75,100]"
