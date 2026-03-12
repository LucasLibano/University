pares = 0
impares = 0

numero = int(input("Digite um numero (0 para sair): "))

while numero != 0:
    
    if numero % 2 == 0:
        pares = pares + 1
    else:
        impares = impares + 1
    
    numero = int(input("Digite um numero (0 para sair): "))

print("Quantidade de pares:", pares)
print("Quantidade de impares:", impares)