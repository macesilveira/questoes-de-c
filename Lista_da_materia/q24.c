// Escreva um programa que leia três números e mostre o maior entre eles

#include <stdio.h>

int main (){

    float num1, num2, num3, maior;

    printf ("Escreva 3 numeros: ");
    scanf ("%f %f %f", &num1, &num2, &num3);

    maior = num1;

   if (num2>maior){
    maior = num2;
   }

   if (num3>maior){
    maior=num3;
   }

   printf("O maior numero digitado foi: %.1f", maior);

    return 0;
}