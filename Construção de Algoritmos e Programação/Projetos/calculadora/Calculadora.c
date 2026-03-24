#include <stdio.h>

int main (){
	float n1, n2, resultado;
	char op;
	
	printf("=== Calculadora===\n");
	printf("Operadores disponveis: +,-,*,/ \n");
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Digite a operacao (+,-,*,/): ");
	scanf(" %c", &op);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	
	if (op == '+'){
		resultado = n1+n2;
		printf("Resultado: %.2f\n", resultado);
		
	}
	
	if (op == '-'){
		printf("Resultado: %.2f\n", resultado);
		resultado = n1-n2;
		
	}
	
	if (op == '/'){
		if (n2 != 0){
			resultado = n1/n2;
			printf("Resultado: %.2f\n", resultado);
		} else {
			printf("Erro: divsao por zero nao permitida.\n");
		}
	}
	
		if (op == '*') {
		resultado = n1*n2;
		printf("Resultado: %.2f\n", resultado);

	}
	
	if (op != '+' && op != '-' && op != '*' && op != '/') {
		printf("Operacao invelaida. \n");
		
	}
	
	return 0;
}
