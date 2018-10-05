# -*- coding: utf-8 -*-

#coding: utf-8

n = int(raw_input())
resultados = []

# transforma a string numa lista
def cria_lista(string):
	stringlista = []
	for i in range(len(string)):
		stringlista.append(string[i])
	return stringlista

# transforma os caracteres para +3 ascii
def tres_a_direita(string):		
	for i in range(len(string)):
		if string[i].isalpha():
			string[i] = (chr(ord(string[i])+3))

# inverte as posições
def inverte(lista):
	i, j = 0, len(lista)-1
	if len(lista) % 2.0 == 0:
		while i <= j:
			lista[i], lista[j] = lista[j], lista[i]
			i += 1
			j -= 1
	else:
		while i != j:
			lista[i], lista[j] = lista[j], lista[i]
			i += 1
			j -= 1

# transforma os caracteres truncados +1 ascii
def um_a_esquerda(string, truncado):
	for i in range(truncado, len(string)):
		string[i] = (chr(ord(string[i])-1))

# retorna a string
def retorna_string(lista):
	string = ''
	for i in range(len(lista)):
		string += lista[i]
	return string
		
for i in range(n):
	string = raw_input()
	truncado = len(string)/2
	
	string = cria_lista(string)
	tres_a_direita(string)
	inverte(string)
	um_a_esquerda(string, truncado)
	string = retorna_string(string)
	
	resultados.append(string)

for i in range(len(resultados)):
	print resultados[i]
	