total = 0

for i in range(7):
    venda = float(input("Digite o valor da venda do dia: "))
    total = total + venda

media = total / 7

print("Total da semana:", total)
print("Média da semana:", media)