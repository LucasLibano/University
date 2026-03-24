#include <stdio.h>

int main (){
int	i,n, multi = 0;
	
	printf("Digite um numero \n");
	scanf("%i", &n);
	
	for (i = 1; i <= 10; i++) {
		
	multi =n*i;
	
	printf("%i x %i = %i \n", n,i,multi );
	}
}
