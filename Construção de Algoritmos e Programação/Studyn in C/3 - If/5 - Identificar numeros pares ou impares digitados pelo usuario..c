#include <stdio.h>

int main (){
	int numero;
	
	printf("Digite um numero: \n");
	scanf("%i", &numero);
	
	if(numero % 2 == 0){
		printf("Seu numero e par: %i \n", numero);
	} else {
		printf("Seu numero e impar: %i \n", numero);
	}
	
}
