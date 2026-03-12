numero = int(input("Digite um número: "))

fatorial = 1

for i in range(numero, 0, -1):
    print(i, end="") #end= quebra de linha, o mesmo que \n em C.
    
    if i > 1:
        print(" x ", end="") 
    
    fatorial = fatorial * i

print("\nResultado:", fatorial)