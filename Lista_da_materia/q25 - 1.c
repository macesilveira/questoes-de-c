// Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de dias deste mês

#include <stdio.h>

int main(){

    int mes;

    printf ("Qual o numero do mes? ");
    scanf("%d", &mes);

    if (mes>12){
        printf("Mes invalido, faca novamente!");

        return 1;
    }

    if (mes==2){
        printf("O mes digitado tem 28 dias");

        return 0;
    } 

    if (mes<=7 && mes%2!=0){
        printf("O mes %d tem 31 dias", mes);
    } else if (mes<=7 && mes%2==0){
        printf("O mes %d tem 30 dias", mes);
    } else if (mes>7 && mes%2==0){
        printf("O mes %d tem 31 dias", mes);
    } else if (mes>7 && mes%2!=0){
        printf("O mes %d tem 30 dias", mes);
    }

    

    return 0;
}