Matrizes em C 

📘 Introdução

Durante as minhas aulas de construção de algoritmo na UNASP uma matriz em C é uma estrutura de dados bidimensional (ou multidimensional) que armazena elementos do mesmo tipo em linhas e colunas.

Elas são ideais para representar tabelas, planilhas, grades, mapas, ou qualquer situação que envolva dados organizados em duas dimensões.

tipo nome[linhas][colunas];


Exemplo:

int matriz[3][3];


Essa declaração cria uma matriz de 3 linhas por 3 colunas (total de 9 elementos inteiros).

🧩 Declaração e Atribuição
Declaração:
int numeros[2][3];

Inicialização:
int numeros[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

Acesso a elementos:
printf("%d", numeros[1][2]); // Exibe o valor da linha 2, coluna 3 (índices começam em 0)

🔁 Percorrendo uma Matriz

O acesso a todos os elementos de uma matriz é feito usando dois loops (geralmente for aninhados):

for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}

💡 Dicas Importantes

Em C, os índices começam em 0.

O primeiro índice representa a linha e o segundo a coluna.

Matrizes consomem mais memória que arrays simples.

Para matrizes grandes, evite usar variáveis locais (prefira malloc).

🧠 Exercícios Práticos – Matrizes em C

🧮 Exercício 1 – Preenchimento e exibição

Crie um programa que armazene valores em uma matriz 2x2 e exiba seus elementos.

🔢 Exercício 2 – Soma de elementos

Leia uma matriz 3x3 e exiba a soma de todos os seus elementos.

➕ Exercício 3 – Soma de duas matrizes

Leia duas matrizes 2x2 e exiba uma terceira matriz contendo a soma entre elas.

🔄 Exercício 4 – Transposição de matriz

Leia uma matriz 3x3 e exiba sua matriz transposta.

🔍 Exercício 5 – Maior e menor elemento

Leia uma matriz 3x3 e informe qual o maior e o menor valor contido nela.

🧾 Exercício 6 – Média dos elementos

Calcule a média dos elementos de uma matriz 3x3 e exiba o resultado.

💬 Exercício 7 – Impressão de diagonal principal

Leia uma matriz 4x4 e exiba apenas os elementos da diagonal principal.

💭 Exercício 8 – Impressão de diagonal secundária

Leia uma matriz 4x4 e exiba apenas os elementos da diagonal secundária.

🔺 Exercício 9 – Soma da diagonal principal

Leia uma matriz 3x3 e exiba a soma dos elementos da diagonal principal.

🔻 Exercício 10 – Soma da diagonal secundária

Leia uma matriz 3x3 e exiba a soma dos elementos da diagonal secundária.

🧮 Exercício 11 – Soma das linhas

Leia uma matriz 3x3 e exiba a soma dos elementos de cada linha.

🧭 Exercício 12 – Soma das colunas

Leia uma matriz 3x3 e exiba a soma dos elementos de cada coluna.

🧊 Exercício 13 – Matriz identidade

Crie uma matriz 3x3 identidade (1’s na diagonal principal e 0’s nos demais elementos).

🧮 Exercício 14 – Multiplicação por escalar

Leia uma matriz 3x3 e um número inteiro. Exiba a matriz multiplicada por esse número.

🔢 Exercício 15 – Multiplicação de matrizes

Leia duas matrizes 2x2 e exiba a matriz resultante da multiplicação entre elas.

🔠 Exercício 16 – Troca de linhas

Leia uma matriz 3x3 e troque a primeira linha pela última.

🔡 Exercício 17 – Troca de colunas

Leia uma matriz 3x3 e troque a primeira coluna pela última.

🔍 Exercício 18 – Contagem de números pares e ímpares

Leia uma matriz 3x3 e exiba quantos números são pares e quantos são ímpares.

🧠 Exercício 19 – Matriz simétrica

Leia uma matriz 3x3 e verifique se ela é simétrica (matriz igual à sua transposta).

🔢 Exercício 20 – Elementos acima da diagonal principal


Leia uma matriz 3x3 e exiba apenas os elementos acima da diagonal principal.
