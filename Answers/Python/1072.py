n = int(raw_input())

entre = 0
fora = 0
for i in range(n):
	x = int(raw_input())
	if((x >= 10) and (x <= 20)):
		entre += 1
	else:
		fora += 1
	
print ("%i in" % (entre))
print ("%i out" % (fora))

	
