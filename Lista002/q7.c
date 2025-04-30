/* Criar um programa que leia a quantidade de fitas de uma locadora de vídeo possui e o valor que ela cobra
por cada aluguel, mostrando as informações pedidas a seguir: a) sabendo que um terço das fitas são
alugadas por mês, exiba o faturamento anual da locadora; b)Quando o cliente atrasa a entrega, é cobrada
uma multa de 10% sobre o valor do aluguel. Sabendo que um decimo das fitas alugadas no mês são
devolvidas com atraso, calcule o valor ganho com multas por mês; c) sabendo ainda que 2% de fitas se
estragam ao longo do ano, e um decimo do total é comprado para reposição, exiba a quantidade de fitas
que a locadora terá no final do ano. */

#include <stdio.h>

int main(){

    int fitas_inicio, fitas_alugadas, fitas_estragadas, fitas_compradas, fitas_final;
    float preco_aluguel_fita, taxa_atraso, valor_aluguel_fita_atrasada, ganho_com_multa, faturamento;

    printf("Quantas fitas tem na locadora? ");
    scanf("%d", &fitas_inicio);
    printf("Qual o valor aluguel de uma fita? ");
    scanf("%f", &preco_aluguel_fita);

    fitas_alugadas=fitas_inicio/3;
    taxa_atraso=preco_aluguel_fita*0.1;
    valor_aluguel_fita_atrasada=preco_aluguel_fita+taxa_atraso;
    ganho_com_multa=((fitas_alugadas/10.0)*taxa_atraso)*12;
    fitas_estragadas=fitas_inicio*0.02;
    fitas_compradas=fitas_inicio/10.0;

    fitas_final=fitas_inicio+fitas_compradas-fitas_estragadas;
    faturamento=((fitas_alugadas*preco_aluguel_fita)+((fitas_alugadas/10.0)*valor_aluguel_fita_atrasada))*12;

    printf("Faturamento anual: R$%.2f", faturamento);
    printf("\nValor ganho com multas: R$%.2f", ganho_com_multa);
    printf("\nQuantidade de fitas que tera no fim do ano: %d fitas", fitas_final);

    return 0;
}