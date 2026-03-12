dia = int(input("Digite o dia: "))
mes = int(input("Digite o mês: "))
ano = int(input("Digite o ano: "))

if ano > 0 and mes >= 1 and mes <= 12 and dia >= 1 and dia <= 31:
    print("Data valida")
else:
    print("Data invalida")