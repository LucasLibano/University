Funções em C — Anotações da Aula de Construção de Algoritmos

Durante a aula de Construção de Algoritmos, aprendi sobre funções em C. Foi um conteúdo que me ajudou a entender melhor como organizar o código e deixar ele mais limpo e fácil de manter.

A ideia principal é que uma função é um bloco de código que faz uma tarefa específica — e isso evita repetição e deixa o programa mais profissional.

🎯 Objetivos da Aula

Entender o que são funções e para que servem

Aprender a criar e usar funções próprias

Saber a diferença entre funções com e sem parâmetros, com e sem retorno

Organizar melhor o código

Praticar com exemplos simples

🧠 O que é uma Função?

Uma função é uma parte do código que executa uma tarefa específica.
Ela ajuda a organizar, reutilizar e facilitar a leitura do programa.

💬 Eu entendi assim:

“Uma função é como uma mini máquina: você manda algo pra ela,
ela processa e devolve o resultado.”

🎨 Estrutura básica de uma função
tipo_de_retorno nome_da_funcao(parâmetros) {
    // código da função
    return valor; // opcional
}

Parte	Explicação
tipo_de_retorno	Tipo do dado que a função devolve (int, float, char, etc.)
nome_da_funcao	Nome escolhido para a função (ex: somar, calcularMedia)
parâmetros	Dados que a função precisa para funcionar
return	Devolve o resultado (pode ser opcional)
🟩 Tipos de Funções
1️⃣ Sem parâmetros e sem retorno

Não recebem nem devolvem nada. Servem apenas para executar uma ação.

void mostrarMensagem() {
    printf("Bem-vindo ao programa!\n");
}

2️⃣ Sem parâmetros e com retorno

Não recebem dados, mas devolvem um valor.

int pegarNumero() {
    return 10;
}

3️⃣ Com parâmetros e sem retorno

Recebem dados, mas não devolvem nada.

void mostrarSoma(int a, int b) {
    printf("A soma é %d\n", a + b);
}

4️⃣ Com parâmetros e com retorno

Recebem dados e devolvem um resultado.

int multiplicar(int a, int b) {
    return a * b;
}

5️⃣ Com valores do tipo float

Usadas quando trabalhamos com números decimais.

float calcularMedia(float n1, float n2) {
    return (n1 + n2) / 2;
}

6️⃣ Com texto ou caracteres

Podem receber ou retornar letras e palavras.

char primeiraLetra(char nome[]) {
    return nome[0];
}

7️⃣ Programa com várias funções

Podemos criar várias funções no mesmo código para deixá-lo organizado.

void menu() {
    printf("=== MINI CALCULADORA ===\n");
}

🧩 Exercícios de Fixação

1️⃣ Criar uma função que mostre uma mensagem de boas-vindas.
2️⃣ Criar uma função que receba um número e mostre o dobro dele.
3️⃣ Criar uma função que calcule a média de duas notas.
4️⃣ Criar uma função que verifique se um número é par ou ímpar.
5️⃣ Criar uma função que calcule a área de um retângulo.
6️⃣ Criar uma função que mostre um menu simples na tela.
7️⃣ Criar uma função que mostre o maior entre dois números.
8️⃣ Criar uma função que mostre uma saudação com o nome do usuário.
9️⃣ Criar uma função que multiplique dois números.
🔟 Criar um programa completo com funções de soma e média.