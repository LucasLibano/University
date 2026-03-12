def converter_moeda(reais):

    dolar = reais / 5.0
    euro = reais / 5.5

    return dolar, euro


valor = float(input("Digite o valor em reais: "))

dolar, euro = converter_moeda(valor)

print("Em dólar:", dolar)
print("Em euro:", euro)