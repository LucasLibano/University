Estruturas de Repetição em C – Laço while
Introdução

O laço while é uma estrutura de repetição da linguagem C utilizada para executar um bloco de instruções enquanto uma condição lógica for verdadeira.
Diferentemente do for, que é recomendado quando o número de repetições é conhecido, o while é mais adequado para situações em que a quantidade de iterações depende de uma condição variável, normalmente determinada em tempo de execução.

Estrutura do Laço while
while (condição) {
    // comandos que serão executados enquanto a condição for verdadeira
}

Detalhamento

Condição: expressão lógica avaliada antes de cada iteração.

Se for verdadeira (≠ 0), o bloco é executado.

Se for falsa (== 0), o laço é encerrado e o programa segue sua execução.

Observação:
Caso a condição nunca se torne falsa, o programa entrará em um loop infinito, sendo essencial garantir que as variáveis envolvidas sejam atualizadas corretamente.

Exemplos Práticos
Exemplo 1 – Contagem de 1 a 5
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 5) {
        printf("Valor de i: %d\n", i);
        i++;
    }

    return 0;
}


Saída:

Valor de i: 1
Valor de i: 2
Valor de i: 3
Valor de i: 4
Valor de i: 5

Exemplo 2 – Contagem Regressiva
#include <stdio.h>

int main() {
    int i = 5;

    while (i >= 1) {
        printf("Contagem: %d\n", i);
        i--;
    }

    return 0;
}


Saída:

Contagem: 5
Contagem: 4
Contagem: 3
Contagem: 2
Contagem: 1

Exemplo 3 – Soma dos Números de 1 a 10
#include <stdio.h>

int main() {
    int soma = 0, i = 1;

    while (i <= 10) {
        soma += i;
        i++;
    }

    printf("Soma total: %d\n", soma);
    return 0;
}


Saída:

Soma total: 55

Quando Utilizar o Laço while

O laço while é indicado quando:

O número de repetições não é conhecido previamente;

A execução depende de uma condição variável;

Deseja-se verificar a condição antes da execução do bloco;

Há necessidade de permitir que o laço não seja executado nenhuma vez, caso a condição inicial seja falsa.

Lista de Exercícios – Estruturas de Repetição com while
Nível 1 – Exercícios Básicos
Exercício 1 – Contagem simples (1 até 10)

Escreva um programa que utilize um laço while para imprimir todos os números de 1 até 10.

Exercício 2 – Contagem até N

Solicite ao usuário um número inteiro positivo N e exiba todos os números de 1 até N, um por linha.

Exercício 3 – Contagem regressiva

Peça ao usuário um número inteiro positivo e realize uma contagem regressiva até chegar a 0.

Exercício 4 – Soma dos 10 primeiros números naturais

Desenvolva um programa que utilize o laço while para calcular e exibir a soma dos números de 1 até 10.

Exercício 5 – Somatório de valores digitados

Solicite que o usuário digite números inteiros.
O programa deve continuar pedindo novos valores até que o número 0 seja informado, exibindo ao final a soma total dos números digitados (exceto o zero).

Exercício 6 – Média de números digitados

Adapte o exercício anterior para calcular e exibir a média dos números digitados (sem contar o zero).

Exercício 7 – Contagem de ímpares até N

Peça ao usuário um número inteiro positivo N e exiba todos os números ímpares de 1 até N.

Nível 2 – Exercícios Intermediários
Exercício 8 – Tabuada de um número

Solicite ao usuário um número inteiro e exiba sua tabuada de 1 até 10, utilizando o laço while.

Exercício 9 – Validação de senha

Crie um programa que solicite uma senha e continue pedindo até que o usuário digite a senha correta (por exemplo, "1234").
Quando o valor correto for informado, exiba a mensagem “Acesso liberado!”.

Exercício 10 – Multiplicação por soma sucessiva

Peça dois números inteiros positivos a e b e calcule o resultado de a × b sem utilizar o operador *, apenas com somas sucessivas dentro do while.

Exercício 11 – Quantidade de dígitos de um número

Peça ao usuário um número inteiro positivo e exiba a quantidade de dígitos que ele possui.

Exercício 12 – Cálculo do fatorial

Solicite um número inteiro positivo N e calcule o fatorial de N utilizando o laço while.

Exercício 13 – Número invertido

Solicite ao usuário um número inteiro positivo e mostre-o invertido (exemplo: entrada 1234 → saída 4321).

Exercício 14 – Números pares em um intervalo

Peça ao usuário dois números inteiros (início e fim) e exiba todos os números pares dentro do intervalo informado.

Exercício 15 – Jogo da adivinhação

Crie um jogo simples em que o programa define um número secreto e o usuário tenta adivinhá-lo.
Enquanto o palpite estiver incorreto:

Se for maior que o número secreto, exiba “Muito alto!”

Se for menor, exiba “Muito baixo!”
Quando acertar, mostre “Parabéns, você acertou!”.