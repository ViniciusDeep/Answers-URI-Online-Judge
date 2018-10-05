# -*- coding: utf-8 -*-

time_seconds = int(raw_input())

h = time_seconds / 3600
m = (time_seconds % 3600) / 60
s = (time_seconds % 3600) % 60


print "%i:%i:%i" % (h, m, s)