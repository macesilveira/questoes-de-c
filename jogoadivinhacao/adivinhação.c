#include <stdio.h>

int main(){
    


    // Imprime o cabeçalho do jogo

    printf("*********************\n");
    printf(" Jogo de adivinhacao \n");
    printf("*********************\n");

    int numero_secreto=42, chute;


    for (int i=1; i<=3; i++){

    // Pergunta ao jogador qual o chute dele
        printf("\nTentativa %d de 3\n", i);
        printf("Chute um numero: ");
        scanf("%d", &chute);
    
    
        if (chute==numero_secreto){
            printf("Parabens! Voce acertou na tentativa %d", i);

            break;
        } 
        else {
            if (chute>numero_secreto){
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