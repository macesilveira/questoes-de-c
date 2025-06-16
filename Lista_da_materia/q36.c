/* Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). Escreva um
programa que leia as notas destes exames e imprima a classificação do aluno, sabendo
que a média é 70.
Classificação: 
A – passou em todos os exames;
B – passou em I, II e IV, mas não em III ou V;
C – passou em I e II, III ou IV, mas não em V.
Reprovado – outras situações */

#include <stdio.h>

int main(){

    int exame1, exame2, exame3, exame4, exame5;

    printf("Nota exame I: ");
    scanf("%d", &exame1);
    printf("Nota exame II: ");
    scanf("%d",&exame2);
    printf("Nota exame III: ");
    scanf("%d", &exame3);
    printf("Nota exame IV: ");
    scanf("%d",&exame4);
    printf("Nota exame V: ");
    scanf("%d",&exame5);


    if (exame1>100 || exame2>100 || exame3>100 || exame4>100 || exame5>100 || exame1<0 || exame2<0 || exame3<0 || exame4<0 || exame5<0){
        printf("Algum exame teve nota digitada acima de 100 ou abaixo de 0\n");
    } else if (exame1>=70 && exame2>=70 && exame3>=70 && exame4>=70 && exame5>=70){
        printf("Classificacao A\n");
    } else if (exame1>=70 && exame2>=70 && exame4>=70 && (exame3 < 70 || exame5 < 70)){
        printf("Classificacao B\n");
    } else if (exame1>=70 && exame2>=70 && (exame3>=70 || exame4>=70) && exame5 < 70){
        printf("Classificacao C\n");
    } else {
        printf("Reprovado\n");
    }



    return 0;
}