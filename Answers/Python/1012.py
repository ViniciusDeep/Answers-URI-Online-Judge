# -*- coding: utf-8 -*-

pi = 3.14159
A, B, C = map(float, raw_input().split())

triangulo = (A*C)/2

circulo = (C*C)*pi

trapezio = ((A+B)*C)/2

quadrado = B*B

retangulo = A*B

print("TRIANGULO: %.3f" %triangulo)
print("CIRCULO: %.3f" %circulo)
print("TRAPEZIO: %.3f" %trapezio)
print("QUADRADO: %.3f" %quadrado)
print("RETANGULO: %.3f" %retangulo)