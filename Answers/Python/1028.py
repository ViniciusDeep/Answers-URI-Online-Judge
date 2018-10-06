# -*- coding: utf-8 -*-

nvezes = int(raw_input())
def euclides_mdc(dividendo, divisor): #maximo divisor comum pelo metodo de euclides
    while divisor != 0:
        temp = divisor
        divisor = dividendo % divisor
        dividendo = temp    
    return dividendo
     
def euclides_recursivo_mdc(dividendo, divisor):
    if divisor == 0:
        return dividendo
    else:
        return euclides_recursivo_mdc(divisor, dividendo % divisor)
 

for i in range(nvezes):
  numeros = raw_input().split()
  if int(numeros[0]) > int(numeros[1]):
    print euclides_recursivo_mdc(int(numeros[0]), int(numeros[1]))
  else:
    print euclides_recursivo_mdc(int(numeros[1]), int(numeros[0]))