lista_compras = ["arroz", "feijao", "leite", "pao"]

print("Lista inicial:", lista_compras)

item = input("Digite o item que voce comprou: ")

if item in lista_compras:
    lista_compras.remove(item)
    print("Item removido")
else:
    print("Item nao está na lista")

print("Lista atual:", lista_compras)