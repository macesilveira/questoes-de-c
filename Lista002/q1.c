#include <stdio.h>
#include <math.h>

int main(){
    float dividendo, divisor, quociente, resto;

    

    printf("Digite o dividendo: ");
    scanf("%f", &dividendo);
    printf("Digite o divisor: ");
    scanf("%f", &divisor);

    quociente=dividendo/divisor;
    resto=fmod(dividendo, divisor);

    printf("O quociente da divisao de %.2f por %.2f eh %.2f, o resto eh %.2f", dividendo, divisor, quociente, resto);

    return 0;

}