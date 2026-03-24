#include <stdio.h>

int main() {
    int idade, meses;

    printf("Digite sua idade em anos: ");
    scanf("%d", &idade);

    meses = idade * 12;

    printf("Você viveu aproximadamente %d meses.\n", meses);

    return 0;
}
