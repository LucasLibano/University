from datetime import date

ano = int(input("Digite o ano: "))
mes = int(input("Digite o mês: "))
dia = int(input("Digite o dia: "))

data_futura = date(ano, mes, dia)
hoje = date.today()

diferenca = data_futura - hoje

print("Faltam", diferenca.days, "dias")