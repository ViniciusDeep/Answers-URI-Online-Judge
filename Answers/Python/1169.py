numero_de_pedidos = int(raw_input())
listaresultados = []
for i in range(numero_de_pedidos):
  numero_de_casas = int(raw_input())
  kgesperado = (2 ** numero_de_casas-1) / 12000
  listaresultados.append(kgesperado)
for i in range(numero_de_pedidos):
  print "%d kg" % listaresultados[i]