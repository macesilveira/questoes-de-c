// Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro

#include <stdio.h>

int main(){

    float base, altura, area;
    printf("Quanto mede a base do retangulo (em cm)? ");
    scanf("%f", &base);
    printf("Quanto mede a altura do retangulo (em cm)? ");
    scanf("%f", &altura);

    area=altura*base;

    printf("A area do retangulo eh: %.1fcm^2", area);

    return 0;
}