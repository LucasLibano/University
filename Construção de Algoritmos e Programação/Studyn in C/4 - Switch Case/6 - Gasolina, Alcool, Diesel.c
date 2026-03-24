#include <stdio.h>

int main (){
	int n1;
	
	printf("---Digite as iniciais---\n");
	printf("Deseja Abastecer com:\n");
	printf("1-Gasolina\n2-Alcool\n3-Diesel\n");
	scanf("%i", &n1);
	
	switch (n1){
		case 1:
		printf("Voce abasteceu com Gasolina");
		break;
		
		case 2:
		printf("Voce abasteceu com Alcool");
		break;
		
		case 3:
		printf("Voce abasteceu com Diesel");
		break;
	}
}
