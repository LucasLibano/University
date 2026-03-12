import random

caracteres = "abcdefghijklmnopqrstuvwxyz0123456789"

senha = ""

for i in range(8):
    senha = senha + random.choice(caracteres)

print("Senha gerada:", senha)