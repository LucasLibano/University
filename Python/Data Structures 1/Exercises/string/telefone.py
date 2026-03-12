telefone = "11400288922"

if len(telefone) == 11:
    
    ddd = telefone[0:2]
    parte1 = telefone[2:7]
    parte2 = telefone[7:]
    
    telefone_formatado = "(" + ddd + ") " + parte1 + "-" + parte2
    
    print(telefone_formatado)

else:
    print("Telefone invalido")