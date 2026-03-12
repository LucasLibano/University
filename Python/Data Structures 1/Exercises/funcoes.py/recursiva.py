def soma(n):

    if n == 1:
        return 1

    return n + soma(n - 1)


numero = int(input("Digite um número: "))

resultado = soma(numero)

print("Resultado:", resultado)