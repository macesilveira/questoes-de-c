#include <stdio.h>

int main(){
    int num1, num2, num3, num4;
    float media_ponderada;

    printf("Digite o numero 1: ");
    scanf("%d",&num1);
    printf("Digite o numero 2: ");
    scanf("%d",&num2);
    printf("Digite o numero 3: ");
    scanf("%d",&num3);
    printf("Digite o numero 4: ");
    scanf("%d",&num4);

    media_ponderada=(num1*1+num2*2+num3*3+num4*4)/10.0;

    printf("A media ponderada dos numeros digitados eh %.1f",media_ponderada);

    return 0;

}