#include <stdio.h>

int main() {
    float n1, n2, n3, media, resultado;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    printf("Digite o terceiro número: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;
    resultado = (media / 2) + 4;

    printf("O resultado é: %.2f\n", resultado);

    return 0;
}
