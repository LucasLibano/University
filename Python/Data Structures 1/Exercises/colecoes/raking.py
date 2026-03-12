alunos = []

for i in range(3):
    nome = input("Digite o nome do aluno: ")
    nota = float(input("Digite a nota: "))
    alunos.append([nome, nota])

# ordenar pela nota (maior para menor)
alunos.sort(key=lambda x: x[1], reverse=True)

print("Ranking de alunos:")

for aluno in alunos:
    print(aluno[0], "-", aluno[1])