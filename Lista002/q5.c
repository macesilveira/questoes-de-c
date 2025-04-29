/* Calcular a quantidade de litros de combustível gastos em uma viagem, sabendo-se que o carro faz 12km
com 1 litro. Deverão. Ser fornecidos a) tempo gasto na viagem; b) e a velocidade media. Apresentar os
valores da velocidade media, tempo gasto, distancia percorrida e quatidade de litros gastos.*/

#include <stdio.h>

int main(){

    int combustivel_gasto, tempo_viagem, velocidade_media, distancia;

    printf("Qual a velocidade media que voce correu na viagem? (Em km/h): ");
    scanf("%d", &velocidade_media);
    printf("Quanto tempo durou a viagem? (Em horas): ");
    scanf("%d", &tempo_viagem);
    
    distancia=velocidade_media*tempo_viagem;
    combustivel_gasto=distancia/12;

    printf("A velocidade media percorrida foi %d km/h em %d horas, a distancia percorrida foi %d km e foi gasto %d litros de combustivel",
    velocidade_media, tempo_viagem, distancia, combustivel_gasto);

    return 0;
}