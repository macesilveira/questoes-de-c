/*Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número
ou um símbolo (qualquer outro caracter, que não uma letra ou número).*/

#include <stdio.h>
#include <ctype.h>

int main(){

    char caractere;

    printf("Digite um caractere: ");
    scanf("%c",&caractere);

    if (isalpha(caractere)){

        char c = tolower(caractere);
    
        if (c=='a' || c=='e' || c=='i' ||c=='o'||c=='u'){
            printf("Eh uma vogal");

        } else {
            printf("Eh um consoante");
        }

    } else if (isdigit(caractere)){
        printf("Eh um numero");

    } else {
        printf("Eh um simbolo");
    }


    return 0;
}