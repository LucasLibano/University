matriz = []

for i in range(4):
    linha = []
    for j in range(4):
        numero = int(input("Digite um número: "))
        linha.append(numero)
    matriz.append(linha)

maior = matriz[0][0]
linha_maior = 0
coluna_maior = 0

for i in range(4):
    for j in range(4):
        if matriz[i][j] > maior:
            maior = matriz[i][j]
            linha_maior = i
            coluna_maior = j

print("Maior valor:", maior)
print("Posição:", linha_maior, coluna_maior)