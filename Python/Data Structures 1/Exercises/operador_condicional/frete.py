valor_compra = float(input("Digite o valor da compra: "))

if valor_compra >= 150:
    frete = 0
else:
    frete = 20

total = valor_compra + frete

print("Frete:", frete)
print("Total a pagar:", total)