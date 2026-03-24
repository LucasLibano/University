#include <stdio.h>

int main (){

int i,n;

printf("Digite um numero inteiro entre 0 e 10 \n");
scanf("%i", &n);

for (i = 1; i <= n; i+=2){

printf("Os numeros impares ate o seu numero e: %i \n", i);
}
	
}
