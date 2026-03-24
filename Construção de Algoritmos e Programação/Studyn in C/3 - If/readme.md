IF e ELSE
💡 O que eu aprendi sobre if e else

Durante meus estudos em C, aprendi sobre as estruturas de controle if e else, que servem para tomar decisões dentro do programa.
Elas permitem que o código execute ações diferentes dependendo de uma condição verdadeira ou falsa.

🧠 Como funciona o if e o else

A estrutura básica é assim:

if (condição) {
    // comandos executados se a condição for verdadeira
} else {
    // comandos executados se a condição for falsa
}


A condição é uma expressão que pode ser verdadeira (diferente de 0) ou falsa (igual a 0).
O else é opcional, mas ele é executado quando a condição do if não é atendida.

🧩 Exemplos que eu estudei
1. Verificando se o número é positivo ou negativo
#include <stdio.h>

int main() {
    int num = -5;

    if (num > 0) {
        printf("O número é positivo.");
    } else {
        printf("O número é negativo.");
    }

    return 0;
}


Saída:

O número é negativo.

2. Classificando a idade

Nesse exemplo, usei o else if para criar mais de uma condição.

#include <stdio.h>

int main() {
    int idade = 18;

    if (idade < 18) {
        printf("Menor de idade");
    } else if (idade >= 18 && idade <= 60) {
        printf("Adulto");
    } else {
        printf("Idoso");
    }

    return 0;
}


Saída:

Adulto

3. Classificação de notas

Aqui o programa classifica uma nota em diferentes categorias usando if, else if e else.

#include <stdio.h>

int main() {
    int nota = 7;

    if (nota >= 9) {
        printf("Nota A");
    } else if (nota >= 7) {
        printf("Nota B");
    } else if (nota >= 5) {
        printf("Nota C");
    } else {
        printf("Nota D");
    }

    return 0;
}


Saída:

Nota B

🧭 Quando eu uso o if e o else

Uso if quando quero que algo aconteça apenas se uma condição for verdadeira.

Uso else para dizer o que deve acontecer caso contrário.

E o else if é útil quando quero testar várias possibilidades diferentes.

Com essas estruturas, consigo criar programas que tomam decisões sozinhos, respondendo a diferentes entradas e situações.