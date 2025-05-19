//  Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de dias deste mês.

#include <stdio.h>

int main(){
	
	int num_mes;
	
	printf("Escreva o numero equivalente ao mes: ");
	scanf("%d", &num_mes);
	
	switch (num_mes){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("O mes %d tem 31 dias", num_mes);
			break;
		case 4: case 6: case 9: case 11:
			printf("O mes %d tem 30 dias", num_mes);
			break;
		case 2:
			printf("O mes %d tem 28 dias", num_mes);
			break;
		default:
			printf("Opção invalida. Faca novamente");
			break;
	}
	
	return 0;
}
