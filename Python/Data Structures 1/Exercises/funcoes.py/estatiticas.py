def estatisticas(lista):

    menor = min(lista)
    maior = max(lista)
    media = sum(lista) / len(lista)

    return menor, maior, media


numeros = [10, 20, 30, 40, 50]

menor, maior, media = estatisticas(numeros)

print("Menor:", menor)
print("Maior:", maior)
print("Média:", media)