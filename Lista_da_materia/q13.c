// Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em sequência de uma resistência R3. Faça um algoritmo para calcular a resistência
// equivalente desse circuito. 

#include <stdio.h>

int main(){

    float r1, r2, r12, r3, rtotal;

    printf("Digite o valor da primeira resistencia (em Ohns): ");
    scanf("%f", &r1);
    printf("Digite o valor da segunda resistencia (em Ohns): ");
    scanf("%f", &r2);

    r12 = (r1*r2)/(r1+r2);

    printf("Digite o valor da terceira resistencia (em Ohns): ");
    scanf("%f", &r3);

    rtotal=r12+r3;

    printf("A resistencia equivalente desse circuito eh: %.1f Ohns", rtotal);

    return 0;
}