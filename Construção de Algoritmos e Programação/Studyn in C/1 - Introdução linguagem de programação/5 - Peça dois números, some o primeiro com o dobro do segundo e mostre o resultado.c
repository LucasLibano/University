#include <stdio.h>

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    resultado = num1 + (2 * num2);

    printf("O resultado é: %d\n", resultado);

    return 0;
}
