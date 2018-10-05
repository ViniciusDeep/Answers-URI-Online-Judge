# -*- coding: utf-8 -*-

import math

a, b, c = map(int, raw_input().split())

maiorab = (a+b+abs(a-b))/2

maiorxc = (maiorab+c+abs(maiorab-c))/2

print("%i eh o maior" %maiorxc)