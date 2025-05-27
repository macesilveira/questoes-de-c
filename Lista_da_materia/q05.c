// Ler um número inteiro e exibir o seu sucessor

#include <stdio.h>
#include <stdlib.h>


int main (){

    int num, sucessor;

    printf("Digite um numero: ");
    scanf("%d", &num);

    sucessor=num+1;

    printf("O sucessor do numero digitado eh %d", sucessor);

    return 0;
}