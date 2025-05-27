//Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um valor de temperatura em Fahrenheit e exibi-lo em Celsius 

#include <stdio.h>
#include <stdlib.h>

int main(){

    float grausF, grausC;

    printf("Temperatura em graus F: ");
    scanf ("%f", &grausF);

    grausC = (5*(grausF -32))/9.0;

    printf("%.1f graus Fahrenheit eh %.1f graus Celcius", grausF, grausC);

    return 0;
}