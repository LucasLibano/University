peso = float(input("Digite seu peso: "))
altura = float(input("Digite sua altura (ex: 1.70): "))

imc = peso / (altura * altura)

print("Seu IMC e:", imc)

if imc < 18.5:
    print("Magreza")
elif imc < 25:
    print("Normal")
elif imc < 30:
    print("Sobrepeso")
else:
    print("Obesidade")