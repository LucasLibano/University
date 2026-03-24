#include <stdio.h>

int main (){
	float nota,media,soma,cont = 0; 
	
	while (1){
		printf("Digite a nota\n");
		scanf("%f", &nota);
		
		if (nota == 0){
		break;
				
		}
		
		soma += nota;
			
		cont++;
		
	}
	
	media = soma/cont;
	
	printf("A media e: %2.f\n", media);
	
	
}


