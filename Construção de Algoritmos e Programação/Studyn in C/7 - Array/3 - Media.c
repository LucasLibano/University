#include <stdio.h>

int main() {
    float notas[4];
    float soma = 0;
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    float media = soma / 4;

    printf("\nMédia final: %.2f\n", media);

    return 0;
}
