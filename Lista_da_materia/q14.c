/* Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre (fica verde), os veículos que nele estavam parados tendem a encontrar os próximos
semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre
eles. Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para
percorrer essa distância. Para que encontre o próximo semáforo aberto, este deve abrir um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um
algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes informações:

a. a distância desde o semáforo anterior
b. a velocidade permitida da via
c. a aceleração típica dos carros */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int distanciaAB, distanciaBC;
    float distancia_aceleracao, distancia_restante, velocidade_viakmh, velocidade_viams, aceleracao_constante, tempo_velocidade_permitida, tempo_semaforoB, tempo_semaforoC;
    printf("------------------------------------------------\n");
    printf("--------------Gestor de semáforos---------------\n");
    printf("------------------------------------------------\n");
    printf("Distancia do primeiro semaforo para o segundo: ");
    scanf("%d", &distanciaAB);
    printf("Distancia do segundo semaforo para o terceiro: ");
    scanf("%d", &distanciaBC);
    printf("Velocidade permitida na via (em Km/h): ");
    scanf("%f", &velocidade_viakmh);
    printf("Aceleracao de arrancada: ");
    scanf("%f", &aceleracao_constante);

    // transformando a velocidade da via em m/s
    velocidade_viams = velocidade_viakmh*3.6;

    // tempo pra atingir a velocidade permitida
    tempo_velocidade_permitida=velocidade_viakmh/aceleracao_constante;

    // distancia percorrida durante a aceleração
    distancia_aceleracao = (1/2)*aceleracao_constante*pow(tempo_velocidade_permitida,2);

    //distancia restante
    distancia_restante=distanciaAB-distancia_aceleracao;



    printf("O semaforo B abrira %ds depois do semaforo A,ja o emaforo C abrira %ds depois.", tempo_semaforoB, tempo_semaforoC);

    return 0;
}