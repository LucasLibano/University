#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, maior, menor;

    printf("Digite os elementos da matriz (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = menor = matriz[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
            if (matriz[i][j] < menor)
                menor = matriz[i][j];
        }
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
