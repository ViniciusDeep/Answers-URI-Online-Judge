# -*- coding: utf-8 -*-

n1, n2, n3 = map(int, raw_input().split())

if n1 > n2 > n3:
	print n3
	print n2
	print n1

	print "\n%i\n%i\n%i" %(n1, n2, n3)
if n1 > n3 > n2:
	print n2
	print n3
	print n1
	
	print "\n%i\n%i\n%i" %(n1, n2, n3)
if n2 > n3 > n1:
	print n1
	print n3
	print n2
	
	print "\n%i\n%i\n%i" %(n1, n2, n3)
if n2 > n1 > n3:
	print n3
	print n1
	print n2
	
	print "\n%i\n%i\n%i" %(n1, n2, n3)
if n3 > n1 > n2:
	print n2
	print n1
	print n3
	
	print "\n%i\n%i\n%i" %(n1, n2, n3)
	
if n3 > n2 > n1:
	print n1
	print n2
	print n3
	
	print "\n%i\n%i\n%i" %(n1, n2, n3)