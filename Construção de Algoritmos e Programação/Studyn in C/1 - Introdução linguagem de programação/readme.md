# 🧠 Minhas Anotações de Introdução à Linguagem C  
## 📚 Aula: `printf` e `scanf`

Oi! 👋  
Essas são as minhas anotações da aula de **Introdução à Lógica de Computação**, onde o professor explicou os conceitos básicos da **linguagem C**, principalmente o uso das funções `printf` e `scanf` — responsáveis pela **saída e entrada de dados**.

---

## 💡 O que aprendi sobre a linguagem C?

O professor contou que **C** é uma linguagem **antiga e poderosa**, criada por **Dennis Ritchie** nos anos 70.  
Ela é:
- 🧩 **Compilada**
- 🧱 **Estruturada**
- ⚡ **Rápida e eficiente**

É usada até hoje em **sistemas operacionais** e **programas de alto desempenho**.  
Achei interessante saber que C é **a base de muitas linguagens modernas**, como C++, Java e Python!

---

## ⚙️ Estrutura básica de um programa em C

Todo programa em C começa com algo assim:

```c
#include <stdio.h>

int main() {
    return 0;
}
✏️ Entendendo:
#include <stdio.h> → inclui a biblioteca padrão de entrada e saída (onde estão printf e scanf).

int main() → é a função principal, onde o programa começa.

return 0; → indica que o programa terminou corretamente.

🖨️ Saída de dados com printf
A função printf() serve para exibir mensagens na tela.

🧩 Exemplo:
c
Copiar código
#include <stdio.h>

int main() {
    printf("Olá, mundo!\n");
    printf("O valor de PI é aproximadamente %.2f\n", 3.14159);
    return 0;
}
🔍 O que aprendi:
\n → quebra de linha

%.2f → mostra um número com duas casas decimais

📊 Principais formatos do printf:
Formato	Tipo de dado	Exemplo
%d	Inteiro	printf("%d", x);
%f	Float/Double	printf("%f", y);
%c	Caractere	printf("%c", c);
%s	String	printf("%s", str);

⌨️ Entrada de dados com scanf
A função scanf() é usada para ler valores digitados pelo usuário.

🧩 Exemplo:
c
Copiar código
#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Você tem %d anos.\n", idade);
    return 0;
}
⚠️ Importante: use o & antes da variável — ele indica o endereço de memória onde o valor será armazenado.

🔄 Fluxo básico de um programa
text
Copiar código
Início → printf() → scanf() → processamento → printf() → Fim
Ou seja:
1️⃣ Mostro uma mensagem
2️⃣ Leio a entrada
3️⃣ Processamento
4️⃣ Mostro o resultado final

🧠 Dicas do professor
✅ Declare as variáveis antes de usar o scanf
✅ É possível ler vários valores de uma vez:

c
Copiar código
int x, y;
scanf("%d %d", &x, &y);
⚠️ Cuidado com fflush(stdin); — não é padrão!
Use getchar(); se precisar limpar o buffer.

🧍‍♂️ Exercício prático
Criei esse programa para ler o nome, idade e altura e exibir uma mensagem personalizada:

c
Copiar código
#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float altura;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura em metros (ex: 1.75): ");
    scanf("%f", &altura);

    printf("Olá %s! Você tem %d anos e mede %.2f metros.\n", nome, idade, altura);
    return 0;
}
⚠️ Esse método não lê nomes com espaços — para isso, usamos fgets().

📝 Lendo nomes com espaços usando fgets
c
Copiar código
#include <stdio.h>

int main() {
    char nome[100];

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Olá, %s", nome);
    return 0;
}
🧹 Removendo o \n do fgets
O fgets lê o Enter como \n, então removemos assim:

c
Copiar código
#include <string.h>

nome[strcspn(nome, "\n")] = 0;
📏 O que é sizeof?
O operador sizeof retorna o tamanho em bytes de uma variável ou tipo.
Serve para evitar ultrapassar o limite de memória de um array, por exemplo:

c
Copiar código
fgets(nome, sizeof(nome), stdin);
🧮 Lista de exercícios para praticar
1️⃣ Peça dois números e mostre a soma.
2️⃣ Peça três notas, calcule e mostre a média.
3️⃣ Peça três números, calcule a média, divida por 2 e some 4, depois mostre o resultado.
4️⃣ Pergunte a idade e calcule quantos meses a pessoa viveu.
5️⃣ Peça dois números, some o primeiro com o dobro do segundo e mostre o resultado.