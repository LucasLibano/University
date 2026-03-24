#include <stdio.h>

int main (){
	
	int numero[2][2];
	int i,j;
	int soma = 0;
	
	for(i=0;i < 2;i++){
		for(j=0;j<2;j++){
		scanf("%i", &numero[i][j]);
		soma = soma + numero[i][j];
		}
	}
		printf("Soma = %i", soma);
	
	
	
}



