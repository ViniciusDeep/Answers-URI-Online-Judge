# -*- coding: utf-8 -*-

n = int(input()) 

print(n)
print("%d nota(s) de R$ 100,00" % (n/100))
n %= 100
print("%d nota(s) de R$ 50,00" % (n/50))
n %= 50
print("%d nota(s) de R$ 20,00" % (n/20))
n %= 20
print("%d nota(s) de R$ 10,00" % (n/10))
n %= 10
print("%d nota(s) de R$ 5,00" % (n/5))
n %= 5
print("%d nota(s) de R$ 2,00" % (n/2))
n %= 2
print("%d nota(s) de R$ 1,00" % (n/1))