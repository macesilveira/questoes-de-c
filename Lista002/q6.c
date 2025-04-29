/* Entrar com valor de um empréstimo, a taxa de juros e a quantidade de meses. Fazer um programa que 
calcule o valor da prestação */

#include <stdio.h>

int main(){
    float valor_emprestimo, taxa_juros, valor_parcela;
    int qntd_meses;

    printf("Qual o valor de emprestimo que voce quer? ");
    scanf("%f", &valor_emprestimo);
    printf("Em quantos meses quer pagar esse emprestimo? ");
    scanf("%d", &qntd_meses);
    printf("Qual taxa de juros deseja pagar? ");
    scanf("%f", &taxa_juros);

    valor_parcela=(valor_emprestimo/qntd_meses)+((valor_emprestimo/qntd_meses)*taxa_juros/100);

    printf("O valor da parcela eh %f", valor_parcela);


    return 0;
}