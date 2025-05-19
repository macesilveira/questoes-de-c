//  Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores.

#include <stdio.h>

int main(){
	
	float num1, num2, num3, maior1, maior2, soma;
	
	printf("Escreva tres numeros: ");
	scanf("%f %f %f", &num1, &num2, &num3);


	if (num1<=num2 && num1<=num3){
		soma=num3+num2;
	} else if (num2<=num1 && num2<=num3){
		soma=num1+num3;
	} else {
		soma=num1+num2;
	}
	

	
	printf("A soma dos dois maiores numeros digitados eh %.1f", soma);
	
	return 0;
}
