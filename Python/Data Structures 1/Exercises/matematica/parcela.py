valor = float(input("Digite o valor da compra: "))
taxa = float(input("Digite a taxa de juros mensal"))
meses = int(input("Digite a quantidade de meses: "))

juros = valor * taxa * meses
valor_final = valor + juros

print("Valor dos juros:", juros)
print("Valor total a pagar:", valor_final)