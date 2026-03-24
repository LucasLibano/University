#include <stdio.h>

int main (){
	int n;
	
	printf("Digite uma nota de 0 a 10\n");
	scanf("%i", &n);
	
	switch (n){
		case 1: case 2: case 3: case 4:
			printf("Ruim");
			break;
			
			case 5: case 6: case 7:
				printf("Regular");
				break;
				
				case 8: case 9: case 10:
					printf ("Otimo");
					break;
					
					default:
						printf("Operação Invalida");
						break;
		
	
	}
}
