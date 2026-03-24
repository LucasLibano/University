#include <stdio.h>

int main (){
	
int num1,num2,num3;

printf("Digite o primeiro numero\n");
scanf("%i", &num1);
printf("Digite o segundo numero\n");
scanf("%i", &num2);
printf("Digite o terceiro numero\n");
scanf("%i", &num3);

if (num1 > num2 && num1 > num3){
	printf("O primeiro numero e maior %i", num1);
}

else if (num2 > num1 && num2 > num3){
	printf("O segundo numero e maior %i", num2);
}

else if (num3 > num1 && num3 > num2){
	printf("O terceiro numero e o maior %i", num3);
}

else {
	printf("Numeros igual ou todos sao iguais");
}

}
