#include <stdio.h>

int main(){
    
    // Imprime o cabeçalho do jogo

    printf("*********************\n");
    printf(" Jogo de adivinhacao \n");
    printf("*********************\n");

    int numero_secreto=42, chute;

    // Pergunta ao jogador qual o chute dele
    printf("Qual eh o seu chute? ");
    scanf("%d", &chute);
    
    
    if (chute==numero_secreto){
        printf("Parabens! Voce acertou!");
    } else{
        printf("Voce errou.");
        /*printf("Você errou. Quer tentar novamente? S=1/N=2\n");
        if tentarnovamente==1*/
    }


}