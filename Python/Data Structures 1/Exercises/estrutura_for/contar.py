lista = [10, 20, 30, 10, 40, 10, 50]

valor = int(input("Digite o valor que deseja procurar: "))

contador = 0

for numero in lista:
    if numero == valor:
        contador = contador + 1

print("O valor aparece", contador, "vezes")