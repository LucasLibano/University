nomes = ["joao silva", "  MARIA souza", "cArLoS alberto"]

lista_final = []

for nome in nomes:
    nome = nome.strip()      # tira espaço do começo e do fim
    nome = nome.lower()      # deixa tudo minusculo
    
    partes = nome.split()    # separa nome e sobrenome
    
    nome_pronto = ""
    
    for parte in partes:
        primeira = parte[0].upper()   # primeira letra maiuscula
        resto = parte[1:]             # resto da palavra
        nome_pronto = nome_pronto + primeira + resto + " "
    
    lista_final.append(nome_pronto.strip())

print(lista_final)