opcao = 0

while opcao != 3:
    print("1 - Dizer Ola")
    print("2 - Mostrar mensagem")
    print("3 - Sair")
    
    opcao = int(input("Escolha uma opção: "))
    
    if opcao == 1:
        print("Ola!")
    elif opcao == 2:
        print("Você escolheu a opcao 2")
    elif opcao == 3:
        print("Saindo do programa...")
    else:
        print("Opção invalida")