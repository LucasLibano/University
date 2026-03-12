print("1 - Converter km/h para m/s")
print("2 - Converter m/s para km/h")

opcao = int(input("Escolha a opção: "))

if opcao == 1:
    kmh = float(input("Digite a velocidade em km/h: "))
    ms = kmh / 3.6
    print("Velocidade em m/s:", ms)

elif opcao == 2:
    ms = float(input("Digite a velocidade em m/s: "))
    kmh = ms * 3.6
    print("Velocidade em km/h:", kmh)

else:
    print("Opção inválida")