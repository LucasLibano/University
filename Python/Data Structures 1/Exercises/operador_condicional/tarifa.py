consumo = float(input("Digite o consumo em kWh: "))

if consumo <= 100:
    valor = consumo * 0.50
elif consumo <= 200:
    valor = consumo * 0.70
else:
    valor = consumo * 0.90

print("Valor da conta:", valor)