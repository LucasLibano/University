matriz = []

for i in range(3):
    linha = []
    for j in range(3):
        numero = int(input("Digite um número: "))
        linha.append(numero)
    matriz.append(linha)

for linha in matriz:
    soma = 0
    for numero in linha:
        soma = soma + numero
    print("Soma da linha:", soma)