X = int(raw_input())
Y = int(raw_input())
menor = min(X,Y)
maior = max(X,Y)
lista = range(menor+1, maior)

soma = 0
for i in lista:
	if not(i%2 == 0):
		soma +=1

print (soma)
