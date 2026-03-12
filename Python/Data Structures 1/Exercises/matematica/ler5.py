preco1 = float(input("Digite o primeiro preco: "))
preco2 = float(input("Digite o segundo preco: "))
preco3 = float(input("Digite o terceiro preco: "))
preco4 = float(input("Digite o quarto preco: "))
preco5 = float(input("Digite o quinto preco: "))

maior = preco1
menor = preco1

if preco2 > maior:
    maior = preco2
if preco3 > maior:
    maior = preco3
if preco4 > maior:
    maior = preco4
if preco5 > maior:
    maior = preco5

if preco2 < menor:
    menor = preco2
if preco3 < menor:
    menor = preco3
if preco4 < menor:
    menor = preco4
if preco5 < menor:
    menor = preco5

media = (preco1 + preco2 + preco3 + preco4 + preco5) / 5

print("Maior preco:", maior)
print("Menor preco:", menor)
print("Media:", media)