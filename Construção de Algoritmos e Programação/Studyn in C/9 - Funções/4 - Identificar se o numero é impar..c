#include <stdio.h>

void retangulo(){
	int base,altura,area;
	
	printf("Digite a base: \n");
	scanf("%i", &base);
	
	printf("Digite a altura: \n");
	scanf("%i", &altura);
	
	area = base * altura;
	
	printf("A area do retangulo e %i", area);

		
}


int main (){
	retangulo();
}

