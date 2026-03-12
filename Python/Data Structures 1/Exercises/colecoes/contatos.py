contatos = {
    "Lucas": "11999999999",
    "Ana": "11888888888",
    "Pedro": "11777777777"
}

nome = input("Digite o nome do contato: ")

if nome in contatos:
    print("Telefone:", contatos[nome])
else:
    print("Contato nao encontrado")