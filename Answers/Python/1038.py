# -*- coding: utf-8 -*-

cod, qtd = map(int, raw_input().split())

if cod == 1:
	print "Total: R$ %.2f" %(qtd * 4.0)
	
if cod == 2:
	print "Total: R$ %.2f" %(qtd * 4.5)
	
if cod == 3:
	print "Total: R$ %.2f" %(qtd * 5.0)
	
if cod == 4:
	print "Total: R$ %.2f" %(qtd * 2.0)

if cod == 5:
	print "Total: R$ %.2f" %(qtd * 1.5)
