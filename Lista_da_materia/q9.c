// Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado seu raio e sua altura

#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main(){

    float volume, raio, altura;
    printf("Qual a altura da lata de oleo (em cm)? ");
    scanf("%f", &altura);
    printf("Qual raio da lata de oleo (em cm)? ");
    scanf("%f", &raio);


    volume= M_PI*pow(raio,2)*altura;

    printf("O volume da lata de oleo eh %.1fcm^3", volume);

    return 0;
}