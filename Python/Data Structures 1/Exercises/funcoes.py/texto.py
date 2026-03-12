def contar_palavras(texto):

    palavras = texto.split()
    quantidade = len(palavras)

    return quantidade


texto = input("Digite um texto: ")

resultado = contar_palavras(texto)

print("Quantidade de palavras:", resultado)