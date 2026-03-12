def calcular_frete(distancia, peso):
    frete = distancia * 0.5 + peso * 2
    return frete


distancia = float(input("Digite a distância: "))
peso = float(input("Digite o peso do produto: "))

valor = calcular_frete(distancia, peso)

print("Valor do frete:", valor)