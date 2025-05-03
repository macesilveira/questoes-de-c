#include <stdio.h>

int main(){
    
    // Imprime o cabeçalho do jogo

    printf("*********************\n");
    printf(" Jogo de adivinhacao \n");
    printf("*********************\n");

    int numero_secreto=42, chute;



    printf("Qual eh o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);


}