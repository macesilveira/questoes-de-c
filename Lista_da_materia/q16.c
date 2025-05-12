// Escreva um programa para gerar o invertido de um número com três algarismos (exemplo: o invertido de 498 é 894).

#include <stdio.h>

int main(){

    int numero, primeiro, segundo, terceiro, numero_invertido;

    printf("Digite um numero de tres algorismos: ");
    scanf("%d", &numero);

    primeiro=numero/100;
    segundo=(numero%100)/10;
    terceiro=numero%10;

    numero_invertido=terceiro*100+segundo*10+primeiro;

    printf ("%d", numero_invertido);

    return 0;
}