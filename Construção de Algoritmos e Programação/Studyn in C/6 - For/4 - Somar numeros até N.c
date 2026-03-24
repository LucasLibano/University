#include <stdio.h>

int main (){
	
	int i, n, soma = 0;
	
	printf("Digite um numero de 1 a 10: \n");
	scanf("%i", &n);
	
	for (i = 1; i <= n; i++){
		
	soma += i;

	}
	
	printf("A soma dos numeros 1 ate %i: %i\n", n, soma);
}
