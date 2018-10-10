def even(number):
	return number % 2 == 0

numbers = []
N = int(input())
for i in range(N):
	numbers.append(int(input()))
	
for i in numbers:
	if i == 0:
		print ("NULL")
	if i < 0 and even(i):
		print ("EVEN NEGATIVE")
	if i > 0 and even(i):
		print ("EVEN POSITIVE")
	if i < 0 and not(even(i)):
		print ("ODD NEGATIVE")
	if i > 0 and not(even(i)):
		print ("ODD POSITIVE")
		
		
