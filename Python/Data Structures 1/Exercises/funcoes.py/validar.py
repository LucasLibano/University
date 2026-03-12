def validar_senha(senha):

    if len(senha) < 8:
        return False

    tem_numero = False

    for c in senha:
        if c.isdigit():
            tem_numero = True

    return tem_numero


senha = input("Digite uma senha: ")

if validar_senha(senha):
    print("Senha válida")
else:
    print("Senha inválida")