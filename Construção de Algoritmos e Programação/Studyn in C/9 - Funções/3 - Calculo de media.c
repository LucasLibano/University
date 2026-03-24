#include <stdio.h>

void impar(){
	int num1;
	printf("Digite um numero: \n");
	scanf("%i", &num1);
	
	if (num1 % 2 == 1){
		printf("O numero e impar.");
	} else {
		printf("O numero e par.");
	}
		
}


int main (){
	impar();
}

