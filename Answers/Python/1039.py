# -*- coding: utf-8 -*-
while True:
  try:
      dados = raw_input().split()
      
      centros, raios = [], []
      
      for i in range(len(dados)):
      	if i != 0 and i != 3:
      		centros.append(int(dados[i]))
      	else:
      		raios.append(int(dados[i]))
      			 
      if raios[1] > raios[0]:		# Testando se o raio da flor é maior que o
      	situacao = "MORTO"		# raio do círculo do caçador.
      else:				# Testando se a distancia entre os dois centros é  
      	import math		# maior que o raio do círculo do caçador.
      	distancia_centros = math.sqrt((centros[2] - centros[0]) ** 2 + 
      	(centros[3] - centros[1]) ** 2)
      	if distancia_centros + raios[1] > raios[0]:
      		situacao = "MORTO"
      	else:	 
      		situacao = "RICO"	
      
      print situacao
  except:
      break