#include <stdio.h>

#define NUMERO_TENTATIVAS 5

int main(){
    


    // Imprime o cabeçalho do jogo

    printf("*********************\n");
    printf(" Jogo de adivinhacao \n");
    printf("*********************\n");

    int numero_secreto=42, chute;

    

    for (int i=1; i<=NUMERO_TENTATIVAS; i++){

    // Pergunta ao jogador qual o chute dele
        printf("\nTentativa %d de %d\n", i, NUMERO_TENTATIVAS);
        printf("Chute um numero: ");
        scanf("%d", &chute);
    
        int acertou = (chute==numero_secreto);

        if (acertou){
            printf("Parabens! Voce acertou na tentativa %d", i);

            break;
        } 
        else {
            int maior = chute>numero_secreto;

            if (maior){
                printf("Seu chute foi MAIOR que o Numero Secreto\n");
                /*printf("Você errou. Quer tentar novamente? S=1/N=2\n");
                if tentarnovamente==1*/
            } 
            else {
                printf("Seu chute foi MENOR que o Numero Secreto\n");
            }
        }
    }    
    printf("\nFim de jogo!");
}