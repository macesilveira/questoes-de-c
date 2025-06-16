/* Uma financeira usa o seguinte critério para conceder empréstimos: o valor total do
empréstimo deve ser até dez vezes o valor da renda mensal do solicitante e o valor da
prestação deve ser no máximo 30% da renda mensal do solicitante. Escreva um programa
que leia a renda mensal de um solicitante, o valor total do empréstimo solicitado e o
número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou
não ser concedido. */


#include <stdio.h>

int main (){

    int qtd_prestacao;
    float renda_mensal, prestacao, valor_emprestimo;

    printf("Qual sua renda mensal? ");
    scanf("%f", &renda_mensal);
    printf("Qual valor voce quer para o emprestimo? ");
    scanf("%f",&valor_emprestimo);
    printf("Em quantas prestacoes quer pagar? ");
    scanf("%d", &qtd_prestacao);

    prestacao=valor_emprestimo/qtd_prestacao;

    if (valor_emprestimo>renda_mensal*10 || prestacao>renda_mensal*0.3){
        printf("Voce nao pode pegar o emprestimo");
    } else {
        printf("Voce pode pegar emprestimo\n");
        printf("As prestacoes serao de R$%.2f por %d meses", prestacao, qtd_prestacao);
    }


    return 0;
}