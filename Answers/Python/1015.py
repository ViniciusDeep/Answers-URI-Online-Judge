# -*- coding: utf-8 -*-

import math

X1, Y1 = map(float, raw_input().split())

X2, Y2 = map(float, raw_input().split())

distancia = ((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1))
final = math.sqrt(distancia)

print("%.4f"%final)