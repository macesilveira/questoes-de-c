#include <stdio.h>

int main (){
    int numero=123,
        primeiro_numero=numero/100,
        segundo_numero=(numero%100)/10,
        terceiro_numero=numero%10,
        numero_invertido=terceiro_numero*100+segundo_numero*10+primeiro_numero;

    printf("%d", numero_invertido);
}