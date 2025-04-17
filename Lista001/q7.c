#include <stdio.h>
#include <math.h>

int main (){
    double graus=80.0;


    printf("Angulo: %.0f\n", graus);
    printf("Seno: %f\n", sin(graus));
    printf("Cosseno: %f\n", cos(graus));
    printf("Tangente: %f\n", tan(graus));
    printf("Secante: %f\n", 1/cos(graus));
    printf("Cossecante: %f\n", 1/sin(graus));
    printf("Cotangente: %f\n", 1/tan(graus));


}