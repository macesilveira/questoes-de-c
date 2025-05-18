// Escreva um programa que leia um número e exiba o seu módulo.

#include <stdio.h>

int main (){

    int num, modulo;
    printf("Numero: ");
    scanf("%d", &num);

    if (num<0){
        modulo=-(num);
        printf("Modulo do numero digitado: %d", modulo);
    } else {
        printf("Modulo do numero digitado: %d", num);
    }

    return 0;
}