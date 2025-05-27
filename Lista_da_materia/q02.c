// Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo

#include <stdio.h>
#include <math.h>


int main(){

    float lado, perimetro, area;

    printf("Quanto mede o lado do quadrado (em cm)? ");
    scanf("%f", &lado);

    perimetro=lado*4;
    area=pow(lado, 2);

    printf("O perimetro do quadrado eh %.1fcm, a area eh %.1fcm^2", perimetro, area);

    return 0;
}