assentos = []

for i in range(5):
    linha = []
    for j in range(5):
        linha.append("O")   # O = livre
    assentos.append(linha)

linha = int(input("Digite a linha do assento (0 a 4): "))
coluna = int(input("Digite a coluna do assento (0 a 4): "))

assentos[linha][coluna] = "X"   # X = ocupado

print("Mapa de assentos:")

for linha in assentos:
    print(linha)