/* Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana
correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um
dia da semana, mostre uma mensagem de erro */

#include <stdio.h>

int main(){

    int dia_semana;
    
    printf("Digite um numero entre 1 e 7: ");
    scanf("%d", &dia_semana);

    switch (dia_semana){
    case 1:
        printf("Domingo");
    break;

    case 2:
        printf("Segunda");
    break;

    case 3:
        printf("Terca");
    break;

    case 4:
        printf("Quarta");
    break;

    case 5:
        printf("Quinta");
    break;

    case 6:
        printf("Sexta");
    break;

    case 7:
        printf("Sabado");
    break;

    default:
        printf("Numero digitado invalido");
        
    }

    return 0;
}