#include <stdio.h>

void media1(){
	float nota1,nota2,media;
	printf("Digite um numero: \n");
	scanf("%f", &nota1);
	printf("Digite o segundo numero: \n");
	scanf("%f", &nota2);
		
	media = (nota1 + nota2) / 2;
	
	printf("A media final e: %.2f", media);
	
}


int main (){
	media1();
}

