#include <stdio.h>

int main() {
    int n1, pontos = 0;

    printf("--- Bem vindo ao ultimo heroi ---\n");
    printf("1 - Investir contra o dragão\n");
    printf("2 - Ataque desesperado\n");
    printf("3 - Esperar o ataque\n");
    printf("Escolha sua ação: ");
    scanf("%i", &n1);

    switch (n1) {
        case 1:
            printf("Você acerta o ponto fraco do dragão.\n");
            pontos = 3;
            break;
        case 2:
            printf("O dragão esquiva e morde você.\n");
            pontos = 0;
            break;
        case 3:
            printf("Você ataca ao mesmo tempo que o dragão, ambos morrem.\n");
            pontos = 1;
            break;
        default:
            printf("Ação inválida.\n");
            pontos = -1;
            break;
    }

    if (pontos >= 0) {
        printf("Você ganhou %d pontos.\n", pontos);
    }

