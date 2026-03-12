texto = input("Digite um texto: ")

palavras = texto.split()

frequencia = {}

for palavra in palavras:
    if palavra in frequencia:
        frequencia[palavra] = frequencia[palavra] + 1
    else:
        frequencia[palavra] = 1

print("Frequência das palavras:")

for palavra in frequencia:
    print(palavra, ":", frequencia[palavra])