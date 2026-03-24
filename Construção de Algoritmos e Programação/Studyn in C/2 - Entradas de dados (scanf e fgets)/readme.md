# 🧠 Fgets vs Scanf  
## 📘 Minhas anotações: Entrada de Dados em C

Oi! 👋  
Essas são minhas anotações sobre **entrada de dados em C**, comparando `scanf` e `fgets`.  

---

## 1️⃣ O que é o `scanf`

O `scanf` serve para **ler números ou palavras curtas** (sem espaço).

Exemplo:
```c
int idade;
printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Você tem %d anos.\n", idade);
Para strings:

c
Copiar código
char nome[20];
printf("Digite seu nome: ");
scanf("%s", nome); // lê só a primeira palavra
printf("Olá, %s!\n", nome);
🧠 Atenção: Se digitar "Maria Silva", o scanf pega só "Maria".

2️⃣ O que é o fgets
O fgets lê linhas inteiras, incluindo espaços.
É útil para nomes completos ou frases.

Exemplo:

c
Copiar código
char nome[30];
printf("Digite seu nome completo: ");
fgets(nome, 30, stdin);
printf("Olá, %s!\n", nome);
Se digitar "Maria Silva", o fgets pega tudo.

3️⃣ Removendo o ENTER (\n)
O fgets guarda o Enter no final da string.
Para remover:

c
Copiar código
nome[strcspn(nome, "\n")] = '\0';
Exemplo completo:

c
Copiar código
#include <stdio.h>
#include <string.h>

int main() {
    char nome[30];

    printf("Digite seu nome completo: ");
    fgets(nome, 30, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Olá, %s!\n", nome);
    return 0;
}
4️⃣ Quando usar cada um
Situação	    scanf	Uso fgets
Número	        ✅       Precisa converter
Palavra simples	✅	    ✅
Nome completo	❌	    ✅
Frase	        ❌	    ✅

5️⃣ Exemplo prático que fiz
c
Copiar código
#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    char nome[40];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    getchar(); // limpa o ENTER do scanf

    printf("Digite seu nome completo: ");
    fgets(nome, 40, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Olá, %s! Você tem %d anos.\n", nome, idade);
    return 0;
}
🧠 Usei o getchar() para limpar o ENTER que sobra do scanf.

6️⃣ Dicas finais
Use scanf para números ou palavras simples.

Use fgets para nomes ou frases com espaço.

Sempre remova o ENTER do fgets.

Se misturar scanf e fgets, use getchar() para limpar o buffer.

Com isso, já consigo evitar os erros mais comuns na entrada de dados em C! 🚀
