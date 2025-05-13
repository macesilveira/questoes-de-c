//Escreva um programa que permute o valor de duas variáveis inteiras

#include <stdio.h>

int main (){

    int a, b, c;

    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);
    printf("Antes da troca: A=%d, B=%d\n", a, b);

    c=a;
    a=b;
    b=c;

    printf("Novo valor de A=%d\n", a);
    printf("Novo valor de B=%d\n", b);

    

    return 0;
}