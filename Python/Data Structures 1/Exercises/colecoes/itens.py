hobbies1 = ["futebol", "jogos", "musica", "filmes"]
hobbies2 = ["musica", "leitura", "jogos", "viagem"]

conjunto1 = set(hobbies1)
conjunto2 = set(hobbies2)

comum = conjunto1 & conjunto2

print("Hobbies em comum:", comum)