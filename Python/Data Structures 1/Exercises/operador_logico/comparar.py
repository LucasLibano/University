preco1 = float(input("Digite o preço do produto 1: "))
quantidade1 = float(input("Digite a quantidade do produto 1: "))

preco2 = float(input("Digite o preço do produto 2: "))
quantidade2 = float(input("Digite a quantidade do produto 2: "))

custo1 = preco1 / quantidade1
custo2 = preco2 / quantidade2

print("Custo por unidade produto 1:", custo1)
print("Custo por unidade produto 2:", custo2)

if custo1 < custo2:
    print("Produto 1 tem melhor custo beneficio")
elif custo2 < custo1:
    print("Produto 2 tem melhor custo beneficio")
else:
    print("Os dois têm o mesmo custo beneficio")