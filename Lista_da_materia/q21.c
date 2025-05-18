//Escreva um programa que leia um número e exiba se ele é positivo ou negativo.

#include <stdio.h>

int main (){

    float num;

    printf("Escreva um numero: ");
    scanf("%f", &num);

    if (num>0){
        printf("Numero positivo");
    } else {
        printf("Numero negativo");
    }

    return 0;
}