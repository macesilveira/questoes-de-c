// Dado os três lados de um triângulo determinar o perímetro do mesmo. 

#include <stdio.h>
#include <stdlib.h>

int main (){

    float ladoA, ladoB, ladoC, perimetro;

    printf("Digite o tamanho dos lados do triangulo: ");
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

    perimetro = ladoA + ladoB + ladoC;

    printf("O perimetro do triangulo eh %.1fcm", perimetro);

    return 0;
}