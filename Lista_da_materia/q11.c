// Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por
// 2 notas de provas

#include <stdio.h>
#include <stdlib.h>

int main(){

    float prova1, prova2, prova3, prova4, bimestral1, bimestral2,semestral;

    printf("Digite sua primeira nota do primeiro bimestre: ");
    scanf("%f", &prova1);
    printf("Digite sua segunda nota do primeiro bimestre: ");
    scanf("%f", &prova2);
    printf("Digite sua primeira nota do segundo bimestre: ");
    scanf("%f", &prova3);
    printf("Digite sua segunda nota do segundo bimestre: ");
    scanf("%f", &prova4);
    
    // nota bimestral 1
    bimestral1 = (prova1 + prova2)/2;

    //nota bimestral 2
    bimestral2 = (prova3 + prova4)/2;

    //nota semestral 
    semestral = (bimestral1 + bimestral2)/2;

    printf("Nota semestral: %.1f", semestral);

    return 0;
}