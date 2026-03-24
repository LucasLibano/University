Estrutura switch case em C

📘 O que é o switch case?

O switch case é uma estrutura de controle usada para executar diferentes blocos de código com base no valor de uma variável.

Ele é muito útil quando há várias condições fixas para a mesma variável, substituindo múltiplos if/else de forma mais organizada e legível.

🧩 Sintaxe
switch (variavel) {
    case valor1:
        // comandos para valor1
        break;
    case valor2:
        // comandos para valor2
        break;
    default:
        // comandos caso nenhum dos casos acima seja atendido
        break;
}

Explicação dos elementos:

case → Cada case representa um valor que será comparado com a variável no switch.

break → Interrompe o fluxo após o bloco ser executado, evitando o chamado fall-through (continuação automática para o próximo caso).

default → Executado quando nenhum dos casos anteriores corresponde ao valor da variável (funciona como o else).

💻 Exemplos Práticos

🗓️ Exemplo 1 – Verificando o dia da semana

Este exemplo imprime o nome do dia com base em um número de 1 a 7.

#include <stdio.h>

int main() {
    int dia = 3;

    switch (dia) {
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda-feira\n"); break;
        case 3: printf("Terça-feira\n"); break;
        case 4: printf("Quarta-feira\n"); break;
        case 5: printf("Quinta-feira\n"); break;
        case 6: printf("Sexta-feira\n"); break;
        case 7: printf("Sábado\n"); break;
        default: printf("Dia inválido\n"); break;
    }

    return 0;
}


Saída esperada:

Terça-feira

📋 Exemplo 2 – Menu de opções

Neste exemplo, o programa apresenta um menu interativo para o usuário escolher uma opção.

#include <stdio.h>

int main() {
    int opcao;

    printf("Escolha uma opção:\n");
    printf("1 - Cadastrar\n");
    printf("2 - Excluir\n");
    printf("3 - Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: printf("Você escolheu cadastrar.\n"); break;
        case 2: printf("Você escolheu excluir.\n"); break;
        case 3: printf("Você escolheu sair.\n"); break;
        default: printf("Opção inválida.\n"); break;
    }

    return 0;
}


Saída (quando opcao = 2):

Você escolheu excluir.

🧮 Exemplo 3 – Calculadora simples

Usando switch case para realizar operações matemáticas básicas.

#include <stdio.h>

int main() {
    int a, b;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); // espaço antes de %c limpa o buffer

    switch (operador) {
        case '+': printf("Resultado: %d\n", a + b); break;
        case '-': printf("Resultado: %d\n", a - b); break;
        case '*': printf("Resultado: %d\n", a * b); break;
        case '/':
            if (b != 0)
                printf("Resultado: %.2f\n", (float)a / b);
            else
                printf("Erro: divisão por zero!\n");
            break;
        default: printf("Operador inválido.\n"); break;
    }

    return 0;
}


Exemplo de Saída (a=10, b=5, operador='/'):

Resultado: 2.00

💡 Quando usar o switch case?

Use o switch case quando:

✅ Você possui muitas opções fixas para uma variável.

✅ Deseja melhor legibilidade em vez de usar vários if/else.

✅ Está comparando valores inteiros, caracteres ou strings fixas.

🧠 Exercícios de Fixação
Exercício 1 – Dia da Semana

Peça ao usuário um número de 1 a 7 e exiba o dia correspondente.

Exemplo:

Digite um número de 1 a 7:
3
Resultado: Terça-feira

Exercício 2 – Mês do Ano

Receba um número de 1 a 12 e imprima o nome do mês correspondente.

Exemplo:

Digite o número do mês:
12
Resultado: Dezembro

Exercício 3 – Menu de Opções

Crie um menu com as opções:

1 - Cadastrar

2 - Excluir

3 - Atualizar

4 - Sair

Exemplo:

Digite sua opção:
2
Resultado: Você escolheu excluir um registro.

Exercício 4 – Classificação de Nota

Peça uma nota de 0 a 10 e classifique:

0 a 4 → Ruim

5 a 7 → Regular

8 a 10 → Ótimo

Exemplo:

Nota: 6
Classificação: Regular


💡 Dica: use vários case agrupados para os mesmos resultados, como:

case 0: case 1: case 2: case 3: case 4:

Exercício 5 – Conversor de Unidade

Crie um menu de conversões:

Km → metros

Metros → centímetros

Centímetros → milímetros

Exemplo:

Digite a opção:
1
Digite o valor em Km:
2
Resultado: 2000 metros

Exercício 6 – Tipo de Combustível

Receba o tipo de combustível (A, G ou D).

Exemplo:

Digite o tipo de combustível (A/G/D):
G
Resultado: Gasolina


💡 Dica: use variável do tipo char.

Exercício 7 – Sistema de Pontos

Um jogador ganha pontos conforme a ação:

1 → Derrota (0 pts)

2 → Empate (1 pt)


3 → Vitória (3 pts)
