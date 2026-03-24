Estrutura de Repetição – Laço for
Introdução

O laço for é uma estrutura de repetição usada quando sabemos exatamente quantas vezes queremos que um bloco de código seja executado. Ele é ideal para situações em que o número de iterações é conhecido, como percorrer intervalos numéricos ou vetores.

Sintaxe do for
for (inicialização; condição; incremento) {
    // comandos que serão executados
}


Inicialização: executada apenas uma vez no início do laço (ex: int i = 0;).

Condição: avaliada antes de cada repetição. Enquanto for verdadeira, o laço continuará.

Incremento: executado após cada iteração (ex: i++).

Exemplos
Exemplo 1 – Contagem de 1 a 5
int i; // Dependendo do compilador, pode ser necessário declarar i fora do laço for (ex: Dev-C++)
for (i = 1; i <= 5; i++) {
    printf("Valor de i: %i\n", i);
}


Saída:

Valor de i: 1
Valor de i: 2
Valor de i: 3
Valor de i: 4
Valor de i: 5

Exemplo 2 – Contagem regressiva de 5 a 1
int i;
for (i = 5; i >= 1; i--) {
    printf("Contagem: %i\n", i);
}


Saída:

Contagem: 5
Contagem: 4
Contagem: 3
Contagem: 2
Contagem: 1

Exemplo 3 – Soma dos números de 1 a 10
int soma = 0;
int i;

for (i = 1; i <= 10; i++) {
    soma += i;
}
printf("Soma total: %i\n", soma);


Saída:

Soma total: 55

Quando utilizar o laço for

Use o for quando:

O número de repetições for conhecido previamente.

For necessário percorrer sequências numéricas ou índices de vetores.

O controle de início, fim e passo do loop for claro e definido.

Lista de Exercícios – Estruturas de Repetição com for
Nível 1 – Exercícios Básicos
1. Contagem simples (1 até 10)

Escreva um programa que utilize um laço for para imprimir todos os números de 1 até 10.

2. Contagem até N

Peça ao usuário um número inteiro positivo N e exiba todos os números de 1 até N, um por linha.

3. Contagem regressiva

Peça ao usuário um número inteiro positivo e exiba uma contagem regressiva até chegar a 0.

4. Soma dos 10 primeiros números naturais

Utilize o for para calcular a soma dos números de 1 até 10 e exiba o resultado.

5. Contagem de ímpares até N

Peça ao usuário um número inteiro positivo N e exiba todos os números ímpares de 1 até N.

Nível 2 – Exercícios Intermediários
6. Tabuada de um número

Peça ao usuário um número inteiro e exiba a tabuada desse número de 1 até 10, utilizando for.

7. Fatorial

Peça ao usuário um número inteiro positivo N e calcule o fatorial de N utilizando for.

8. Números pares em um intervalo

Peça dois números inteiros (início e fim) e exiba todos os números pares dentro desse intervalo em ordem crescente.

Nível Extra – Aplicações com for e break
9. Somatório de valores digitados

Peça que o usuário digite números inteiros repetidamente.
Use um laço for infinito (com break) para continuar até que o número 0 seja digitado.
Exiba a soma de todos os valores digitados, sem contar o zero.

10. Média de números digitados

Similar ao exercício anterior, mas agora o programa deve calcular a média dos números digitados (sem considerar o zero).

11. Validação de senha

Peça ao usuário uma senha.
Enquanto a senha digitada não for igual à senha correta (definida no programa), continue pedindo novamente utilizando for com break.
Quando o usuário acertar, exiba "Acesso liberado!".

12. Multiplicação por soma sucessiva

Peça ao usuário dois números inteiros positivos a e b.
Calcule o resultado de a × b sem usar o operador *, utilizando apenas somas repetidas dentro de um for.

13. Quantidade de dígitos de um número

Peça ao usuário um número inteiro positivo e determine quantos dígitos ele possui utilizando for.

14. Número invertido

Peça ao usuário um número inteiro positivo e utilize um laço for para inverter a ordem dos seus dígitos.

15. Jogo da adivinhação

O programa deve gerar um número secreto.
O usuário deve tentar adivinhar o número dentro de um laço for com limite de tentativas ou uso de break.

Se o palpite for maior que o número secreto, exiba "Muito alto!".

Se for menor, exiba "Muito baixo!".

Quando acertar, exiba "Parabéns, você acertou!".