# -*- coding: utf-8 -*-

voltaram =[]

while True:
	p = int(raw_input())
	if p == -1: break
	x = p-1
	if x > 1 :
		voltaram.append(x)
	elif x <= 1:
		voltaram.append(0)
	
for i in range(len(voltaram)):
	print voltaram[i]
		