//Escreva um programa que calcule a raiz de uma equação do primeiro grau

#include <stdio.h>
#include <math.h>

int main(){

    int a, b;
    float x;

    printf("----Calculador de raiz do primeiro grau----\n");
    printf("-------------------------------------------\n");
    printf("Digite o valor de a: ");
    scanf ("%d", &a);
    printf("Digite o valor de b: ");
    scanf ("%d", &b);

    x = b/a;

    printf("-----------------Resultado-----------------\n");
    printf("A raiz da equacao %dx + (%d) = 0 eh x= %.1f", a,b,x);
    
    return 0;
}