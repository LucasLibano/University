#include <stdio.h>

int main (){
	int op;
	
	printf("Voce deseja: \n1 Cadastrar\n2 Excluir\n3 Atualizar\n4 Sair\n");
	scanf("%i",&op);
	
	switch (op){
		case 1:
		printf("Voce desejou cadastrar...");
		break;
		
		case 2:
		printf ("Voce desejou excluir, excluindo em 3 2 1...");
		break;
		
		case 3:
		printf("Atualizando...");
		break;
			
		case 4:
		printf("Voce desejou sair");
		break;
			
		default:
		printf("Operação Invalida");
		break;
			

	}
	
}
