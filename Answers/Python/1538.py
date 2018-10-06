# -*- coding: utf-8 -*-

while True:

    numero = int(raw_input()) ** 2
    if numero == 0:
      break
    else:
      
      numeroatual = ""
      numeroinvertido = ""
      while True:
        resto = numero / 4
        modulo = numero % 4
        if numero < 4:
          numeroatual += str(numero)
          break
        numero = resto
        numeroatual += str(modulo)
        
      for i in range(len(numeroatual)-1,-1,-1):
        if numeroatual[i] == "0":
          numeroinvertido += "A"
        elif numeroatual[i] == "1":
          numeroinvertido += "B"
        elif numeroatual[i] == "2":
          numeroinvertido += "C"
        elif numeroatual[i] == "3":
          numeroinvertido += "D"
    print numeroinvertido
