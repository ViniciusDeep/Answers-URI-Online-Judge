# -*- coding: utf-8 -*-

A, B, C, D = map(int, raw_input().split())

if (B > C) and (D > A) and (C + D) > (A + B) and (A, B, C > 0):
	print"Valores aceitos"
else: 
	print"Valores nao aceitos"
