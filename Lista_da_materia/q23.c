// Escreva um programa que leia um número e imprima se este número é ou não par

#include <stdio.h>

int main(){

    int num;

    printf("Numero: ");
    scanf("%d", &num);

    if (num%2==0){
        printf("Numero par");
    } else {
        printf ("Numero impar");
    }

    return 0;
}