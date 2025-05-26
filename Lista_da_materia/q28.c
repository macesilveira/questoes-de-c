// Escreva um programa que leia uma letra e mostre se ela é vogal ou consoante

#include <stdio.h>
#include <ctype.h>

int main(){
	
	char letra;
	
	printf("Escreva uma letra: ");
	scanf(" %c", &letra);
	
	if (!isalpha(letra)){
		printf("O caractere digitado nao eh uma letra\n");
	} else {
		letra = tolower(letra);
		
		if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
			printf("Vogal");
		} else {
			printf("Consoante");
		}
	}
	
	
	return 0;
}
