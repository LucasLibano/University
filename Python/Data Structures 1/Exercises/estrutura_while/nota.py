soma = 0
contador = 0

nota = float(input("Digite a nota (-1 para sair): "))

while nota != -1:
    soma = soma + nota
    contador = contador + 1
    nota = float(input("Digite a nota (-1 para sair): "))

if contador > 0:
    media = soma / contador
    print("Media:", media)
else:
    print("Nenhuma nota foi digitada")