//Converter um inteiro informado menor que 32 para sua representação em binário

#include <stdio.h>

int main(){

    int num, divisao1, divisao2, divisao3, divisao4, divisao5, resto1, resto2, resto3, resto4, resto5, resto6;

    printf("Digite um numero igual ou menor que 32: ");
    scanf("%d", &num);

    //primeira divisão e resto
    divisao1=num/2;
    resto1=num%2;

    //segunda divisão e resto

    divisao2=divisao1/2;
    resto2=divisao1%2;

    //terceira divisão e resto

    divisao3=divisao2/2;
    resto3=divisao2%2;
    //quarta divisão e resto

    divisao4=divisao3/2;
    resto4=divisao3%2;

    //quinta divisão e resto

    divisao5=divisao4/2;
    resto5=divisao4%2;

    //sexta divisão e resto

    resto6=divisao5%2;

    printf("%d%d%d%d%d%d",resto6,resto5,resto4,resto3,resto2, resto1);

    return 0;
}