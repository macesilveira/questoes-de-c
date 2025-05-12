//Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para Km/h. Para tal, multiplique o valor em m/s por 3,6

#include <stdio.h>

int main (){

    float velocidade_kmh, velocidade_ms;
    
    printf("Velocidade em Km/h: ");
    scanf("%f", &velocidade_kmh);

    velocidade_ms= velocidade_kmh*3.6;

    printf("%.1fkm/h em metros por segudo eh %.1f", velocidade_kmh, velocidade_ms);

    return 0;
}