lista = [1, 2, 3, 2, 4, 1, 5]

nova_lista = []

for numero in lista:
    if numero not in nova_lista:
        nova_lista.append(numero)

print("Lista sem duplicados:", nova_lista)