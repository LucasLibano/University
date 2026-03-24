Guia Completo de Arrays (Vetores) em C

Durante meus estudos em Linguagem C durante as aulas de construção de algoritmos na UNASP, decidi criar este guia completo sobre Arrays (ou vetores). O objetivo foi reunir, de forma clara e prática, tudo o que aprendi sobre o assunto — desde a declaração e inicialização até exemplos reais de uso e exercícios práticos para fixar o conteúdo.


📘 1. O que é um Array?

Um array em C é uma estrutura que permite armazenar vários valores do mesmo tipo dentro de uma única variável.

Por exemplo, em vez de criar 10 variáveis para guardar 10 idades (idade1, idade2...), posso simplesmente criar um array chamado idades[10].

📌 Lembretes importantes:

O tamanho do array deve ser definido na declaração.

Os índices sempre começam em 0.

🧩 2. Como declarar um Array em C
// Forma geral
tipo nome[tamanho];

// Exemplo
int numeros[5]; // array de 5 inteiros

🔢 3. Como inicializar um Array
int pares[5] = {2, 4, 6, 8, 10};
char vogais[5] = {'a', 'e', 'i', 'o', 'u'};


Se nem todos os valores forem preenchidos, o restante será inicializado com 0 automaticamente.

💻 4. Exemplos por Tipo de Dado
4.1 Inteiros (int)
#include <stdio.h>

int main() {
    int idades[3] = {15, 20, 25};

    for (int i = 0; i < 3; i++) {
        printf("Idade %d: %d\n", i, idades[i]);
    }

    return 0;
}

4.2 Decimais (float)
#include <stdio.h>

int main() {
    float notas[4] = {7.5, 8.0, 9.2, 6.8};
    float soma = 0;

    for (int i = 0; i < 4; i++) {
        soma += notas[i];
    }

    printf("Média: %.2f\n", soma / 4);
    return 0;
}

4.3 Caracteres (char)
#include <stdio.h>

int main() {
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < 5; i++) {
        printf("Vogal %d: %c\n", i, vogais[i]);
    }

    return 0;
}

4.4 Strings (vetores de char)
#include <stdio.h>

int main() {
    char nome[10] = "Maria";

    printf("Nome: %s\n", nome);
    printf("Primeira letra: %c\n", nome[0]);
    printf("Última letra: %c\n", nome[4]);
    return 0;
}

4.5 Array bidimensional de char (vários nomes)
#include <stdio.h>

int main() {
    char nomes[3][20];

    printf("Digite o primeiro nome: ");
    scanf("%19s", nomes[0]);

    printf("Digite o segundo nome: ");
    scanf("%19s", nomes[1]);

    printf("Digite o terceiro nome: ");
    scanf("%19s", nomes[2]);

    printf("\nNomes digitados:\n");
    printf("1: %s\n", nomes[0]);
    printf("2: %s\n", nomes[1]);
    printf("3: %s\n", nomes[2]);

    return 0;
}

⚙️ 5. Acesso por Índice
#include <stdio.h>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    printf("Primeiro: %d\n", numeros[0]);
    printf("Terceiro: %d\n", numeros[2]);
    printf("Último: %d\n", numeros[4]);

    numeros[2] = 99;
    printf("Novo valor na posição 2: %d\n", numeros[2]);

    return 0;
}


📌 Se você tentar acessar um índice inválido (como numeros[10]), o compilador não dá erro, mas o programa pode se comportar de forma imprevisível.

❓ 6. Perguntas Frequentes

Por que arrays começam em 0?
Porque o índice representa o deslocamento em memória — o primeiro elemento está na posição inicial (0).

Como saber o tamanho de um array?

int arr[6] = {1, 2, 3, 4, 5, 6};
int tamanho = sizeof(arr) / sizeof(arr[0]);
printf("Tamanho: %d\n", tamanho);


Posso aumentar o tamanho de um array?
Não. Arrays em C têm tamanho fixo. Para algo dinâmico, é preciso usar malloc (assunto mais avançado).

⚠️ 7. Erros Comuns

Esquecer que os índices começam em 0.

Acessar posições inválidas.

Esquecer do \0 ao trabalhar com strings.

Confundir char (um caractere) com string (um array de char).

🧮 Exemplo prático com scanf

Modo menos prático:

#include <stdio.h>

int main() {
    float notas[4];
    float soma = 0;

    printf("Digite a nota 1: ");
    scanf("%f", &notas[0]);
    printf("Digite a nota 2: ");
    scanf("%f", &notas[1]);
    printf("Digite a nota 3: ");
    scanf("%f", &notas[2]);
    printf("Digite a nota 4: ");
    scanf("%f", &notas[3]);

    soma = notas[0] + notas[1] + notas[2] + notas[3];
    printf("Média: %.2f\n", soma / 4);
}


Modo mais prático, usando laço:

#include <stdio.h>

int main() {
    float notas[4];
    float soma = 0;

    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    printf("Média: %.2f\n", soma / 4);
    return 0;
}

🧠 Exercícios Práticos – Arrays em C

Esses exercícios foram feitos para testar o entendimento de arrays, lógica e manipulação de dados.

Exercício 1 – Preenchimento simples

Crie um programa que armazene 4 números inteiros em um array e depois os exiba.

Exercício 2 – Números ao contrário

Peça 5 números ao usuário e mostre-os na ordem inversa.

Exercício 3 – Média de notas

Solicite 4 notas e mostre a média final.

Exercício 4 – Contando números pares

Leia 10 números inteiros e mostre quantos são pares.

Exercício 5 – Maior e menor valor

Leia 6 números e mostre qual é o maior e o menor.

Exercício 6 – Soma de duas listas

Leia 5 números em dois arrays e crie um terceiro com a soma das posições correspondentes.

Exercício 7 – Média geral e acima da média

Leia 6 notas, calcule a média geral e mostre quais ficaram acima da média.

Exercício 8 – Procurando um valor

Leia 8 números e pergunte ao usuário qual deseja procurar, mostrando se foi encontrado e em qual posição.