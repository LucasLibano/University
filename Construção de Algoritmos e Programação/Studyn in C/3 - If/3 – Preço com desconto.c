#include <stdio.h>

int main() {
    float preco, preco_final;
    
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    
    if(preco < 50) {
        printf("Sem desconto. Preco final: %.2f\n", preco);
    } else if(preco < 100) {
        preco_final = preco * 0.9;
        printf("Desconto 10%% aplicado. Preco final: %.2f\n", preco_final);
    } else {
        preco_final = preco * 0.8;
        printf("Desconto 20%% aplicado. Preco final: %.2f\n", preco_final);
    }
    
    return 0;
}


