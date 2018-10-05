# -*- coding: utf-8 -*-

nome = raw_input()
salario = float(input(""))
vendas = float(input(""))

SALARIO = salario+(vendas*0.15)

print("TOTAL = R$ %.2f" %SALARIO)