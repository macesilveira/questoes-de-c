//Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias

#include <stdio.h>
#include <stdlib.h>

int main (){

    int idade_em_dias, idade_em_anos, idade_em_meses, idade_em_dias2;

    printf("Quantos dias de vida voce tem? ");
    scanf("%d", &idade_em_dias);

    idade_em_anos=(idade_em_dias/365);
    idade_em_meses=(idade_em_dias%365)/30;
    idade_em_dias2=idade_em_dias-(idade_em_anos*365)-(idade_em_meses*30);

    printf ("A pessoa que tem %d dias de vida, tem: %d anos, %d meses e %d dias", idade_em_dias, idade_em_anos, idade_em_meses, idade_em_dias2);

    return 0;
}