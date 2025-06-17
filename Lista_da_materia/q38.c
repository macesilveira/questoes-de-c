/* Chama-se ano bissexto o ano ao qual é acrescentado um dia extra, ficando ele com 366
dias, um dia a mais do que os anos normais de 365 dias, ocorrendo a cada quatro anos.

Escreva um programa que verifique se um ano é bissexto. Um ano é bissexto se ele é
divisível por 4 e não divisível por 100. Exceção, se ele for
divisível por 400, ele volta a ser bissexto.

a. São bissextos os anos: 1600, 1996, 2000, 2004, 2008, 2012, 2016, 2400, 2800, ...
b. Não são bissextos: 1500, 1974, 1982, 1983, 1990, 2018, 2022, 2030, 2038, ... */

#include <stdio.h>

int main (){

    int ano;

    printf("VERIFICADOR DE ANO BISSEXTO\n");
    printf("---------------------------\n");
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano%400==0 || (ano%4==0 && ano%100!=0)){
        printf("Ano bissexto");
    } else{
        printf("Ano nao bissexto");
    }

    return 0;
}