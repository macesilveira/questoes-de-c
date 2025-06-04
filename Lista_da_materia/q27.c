// Escreva um programa que leia 3 números e calcule a média ponderada entre eles. Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5.

#include <stdio.h>

int main(){
	
	float num1, num2, num3, media;
	
	printf("Escreva 3 numeros: ");
	scanf("%f %f %f",&num1, &num2, &num3);
	
	if (num1>=num2 && num1>=num3) {
		media=(num1*5+num2*2.5+num3*2.5)/10.0;
	} else if (num2>=num1 && num2>=num3){
		media=(num2*5+num1*2.5+num3*2.5)/10.0;
	} else {
		media=(num3*5+num1*2.5+num2*2.5)/10.0;
	}
	
	printf("A media ponderada dos numeros digitados eh: %.2f\n", media);

	return 0;
}
