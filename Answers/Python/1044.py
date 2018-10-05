# -*- coding: utf-8 -*-

n1, n2 = map(int, raw_input().split())

if n1 == n2:
	print"Sao Multiplos"
	
if n1 > n2:
	if (n1%n2) == 0:
		print"Sao Multiplos"
	else:
		print"Nao sao Multiplos"

if n1 < n2 :
	if (n2%n1) == 0:
		print"Sao Multiplos"
	else:
		print"Nao sao Multiplos"
