/*  Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima"
no sentido de que as notas de menor valor fossem distribuídas em número mínimo
possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar
uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$
1,00. 

Escreva um programa que receba o valor da quantia solicitada e retorne a
distribuição das notas de acordo com o critério da distribuição ótima (considere existir
notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00) */

#include <stdio.h>

int main(){

    int quantia_solicitada,num_notas_de100,num_notas_de50, num_notas_de20, num_notas_de10, num_notas_de5, num_notas_de2, num_notas_de1;
    printf("Quantos reais voce quer sacar? ");
    scanf("%d",&quantia_solicitada);

    num_notas_de100=quantia_solicitada/100;
    num_notas_de50=(quantia_solicitada-(num_notas_de100*100))/50;
    num_notas_de20=(quantia_solicitada-(num_notas_de100*100)-(num_notas_de50*50))/20;
    num_notas_de10=(quantia_solicitada-(num_notas_de100*100)-(num_notas_de50*50)-(num_notas_de20*20))/10;
    num_notas_de5=(quantia_solicitada-(num_notas_de100*100)-(num_notas_de50*50)-(num_notas_de20*20)-(num_notas_de10*10))/5;
    num_notas_de2=(quantia_solicitada-(num_notas_de100*100)-(num_notas_de50*50)-(num_notas_de20*20)-(num_notas_de10*10)-(num_notas_de5*5))/2;
    num_notas_de1=(quantia_solicitada-(num_notas_de100*100)-(num_notas_de50*50)-(num_notas_de20*20)-(num_notas_de10*10)-(num_notas_de5*5)-(num_notas_de2*2));

    printf("%d nota(s) de 100 reais, %d nota(s) de 50 reais, %d nota(s) de 20 reais, %d nota(s) de 10 reais, %d nota(s) de 5 reais, %d nota(s) de 2 reais, %d nota(s) de 1 real."
        ,num_notas_de100, num_notas_de50, num_notas_de20, num_notas_de10, num_notas_de5, num_notas_de2, num_notas_de1);

    return 0;
}