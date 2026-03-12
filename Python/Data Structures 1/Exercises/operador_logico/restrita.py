idade = int(input("Digite sua idade: "))
ativo = int(input("Usuário está ativo? (1 para sim, 0 para não): "))

if idade >= 18 and ativo == 1:
    print("Acesso liberado")
else:
    print("Acesso negado")