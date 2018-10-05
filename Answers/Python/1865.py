# -*- coding: utf-8 -*-

c = int(raw_input())
lista = []
for i in range(0, c):
	heroi = raw_input()
	heroi = heroi.split()
	if heroi[0] != "Thor":
		lista.append("N")
	else:
		lista.append("Y")

for i in range(len(lista)):
	print lista[i]
