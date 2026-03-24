#include <stdio.h>

int main() {
    int numeros[5];
    int i;


    for (i = 0; i < 5; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros na ordem inversa:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
