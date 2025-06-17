/* Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de
pulverização dependem do tipo de praga e da área a ser contratada conforme a tabela:
Tipo 1 – ervas daninhas R$ 50,00 por acre;
Tipo 2 – gafanhotos R$ 100,00 por acre;
Tipo 3 – broca R$ 150,00 por acre;
Tipo 4 – todos acima R$ 250,00 por acre.

Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de
5%. Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um
desconto de 10% sobre o valor que ultrapassar os R$ 750,00. Caso ambos os descontos se
aplicam o da área é calculado antes. 

Fazer um algoritmo que leia: o tipo de pulverização
(1 a 4) e área a ser pulverizada; e imprima o valor a ser pago */

#include <stdio.h>

int main(){

    int qntd_acre, tipo_pulverizacao;
    float valor_servico, valor_final_servico, desconto_excedente=0;
    
    printf("Quantos acres voce quer pulverizar? ");
    scanf("%d", &qntd_acre);
    printf("O que sera pulverizado na sua lavoura? (Digite somente o numero):\n");
    printf("Tipo 1 - Ervas daninhas (R$ 50,00 por acre)\n");
    printf("Tipo 2 - Gafanhotos     (R$ 100,00 por acre)\n");
    printf("Tipo 3 - Broca          (R$ 150,00 por acre)\n");
    printf("Tipo 4 - Todos acima    (R$ 250,00 por acre)\n");
    scanf("%d", &tipo_pulverizacao);

    switch (tipo_pulverizacao){

        case 1:
            valor_servico=qntd_acre*50.00;
            break;
        case 2:
            valor_servico=qntd_acre*100.00;
            break;
        case 3:
            valor_servico=qntd_acre*150.00;
            break;
        case 4:
            valor_servico=qntd_acre*250.00;
            break;
        default:
            printf("Numero digitado invalido. Digite de 1 a 4\n");
        return 1;
    }

    if (qntd_acre>1000){
        valor_servico=valor_servico-valor_servico*0.05;
    }

    if (valor_servico>750){
        desconto_excedente=(valor_servico-750)*0.10;
    }

    valor_final_servico=valor_servico-desconto_excedente;

    printf("VALOR A SER PAGO: R$%.2f\n", valor_final_servico);


    return 0;
}