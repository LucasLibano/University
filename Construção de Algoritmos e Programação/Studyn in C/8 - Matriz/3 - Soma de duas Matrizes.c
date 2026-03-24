#include <stdio.h>

int main() {
    int matrizA[2][2], matrizB[2][2], soma[2][2];
    int i, j;

    printf("Digite os elementos da primeira matriz (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("\nMatriz Soma:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            soma[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
