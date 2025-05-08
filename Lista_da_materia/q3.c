// Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main(){

    float raio, perimetro, area;

    printf("Qual o tamanho do raio da circunferencia que voce quer calcular a area e o perimetro? ");
    scanf("%f", &raio);

    perimetro=2*M_PI*raio;
    area=M_PI*pow(raio, 2);

    printf("O perimetro dessa circunferencia eh %.1fcm, a area %.1fcm^2", perimetro, area);
    
    return 0;
}