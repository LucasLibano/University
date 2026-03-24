#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    
    media = (n1 + n2 + n3) / 3;
    
    if (media >= 6.0) {
        printf("Aluno aprovado! Media: %.2f\n", media);
    } else {
        printf("Aluno reprovado! Media: %.2f\n", media);
    }
    
    return 0;
}

