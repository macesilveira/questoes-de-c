/* Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o
ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0). */

#include <stdio.h>

int main(){

    int x, y;

    printf("Digite o valor de X: ");
    scanf("%d",&x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    if (x==0 && y==0){
        printf("O ponto esta na origem\n");
    } else if (y!=0 && x==0){
        printf("O ponto esta sobre o eixo Y\n");
    } else if (x!=0 && y==0){
        printf("O ponto esta sobre o eixo X\n");
    } else if (x>0 && y>0){
        printf("O ponto esta no primeiro quadrante\n");
    } else if (x<0 && y>0){
        printf("O ponto esta no segundo quadrante\n");
    } else if (x<0 && y<0){
        printf("O ponto esta no terceiro quadrante\n");
    }else{
        printf("O ponto esta no quarto quadrante\n");
    }



    return 0;
}