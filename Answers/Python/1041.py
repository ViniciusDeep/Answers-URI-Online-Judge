# -*- coding: utf-8 -*-

n1, n2 = map(float, raw_input().split())

if n1 == n2 == 0.0:
	print"Origem"
else:
	if n1 > 0.0 and n2 > 0.0:
		print "Q1"

	if n1 > 0.0 and n2 < 0.0:
		print "Q4"
	
	if n1 < 0.0 and n2 > 0.0:
		print "Q2"
	
	if n1 < 0.0 and n2 < 0.0:
		print "Q3"
	
	if n1 == 0.0 and n1 != n2:
		print"Eixo Y"
		
	if n2 == 0.0 and n1 != n2:
		print"Eixo X"