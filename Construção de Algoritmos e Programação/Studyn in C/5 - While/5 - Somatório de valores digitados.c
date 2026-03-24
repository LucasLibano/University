#include <stdio.h>

main (){
	int n1,soma = 0;
		
	while (1){
		
	printf("Digite um numero inteiro\n");
	scanf("%i", &n1);
	
	if (n1 == 0){
		break;
	}
	
	soma += n1;
		
	}
	
	printf("A soma dos seus numero e:\n %i", soma);
}
