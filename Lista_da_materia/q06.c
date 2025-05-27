// Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, resto;
    float quociente;

    printf("Digite o dividendo: ");
    scanf("%d", &num1);
    printf("Digite o dividendo: ");
    scanf("%d", &num2);

    quociente=num1/num2;
    resto=(num1%num2);

    printf("O quociente de %d divido por %d eh igual a %.1f o resto eh %d", num1, num2, quociente, resto);
    

    return 0;
}
