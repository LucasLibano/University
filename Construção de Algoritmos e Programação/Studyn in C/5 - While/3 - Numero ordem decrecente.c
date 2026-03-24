#include <stdio.h>

int main (){
	int n1;
	//int n2 = 0;
	
	printf ("Digite um numero\n");
	scanf("%i", &n1);
	
	while (n1 >= 0){
		printf ("%i\n", n1);
		
		n1--;
	}
	
}
