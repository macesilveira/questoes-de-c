/* Calcular o salario liquido de um professor. Os dados fornecidos serão: a) valor hora aula; b) numero de
aulas dadas; c) percentual de desconto INSS */

#include <stdio.h>

int main(){

    int percentual_inss, valor_hora_aula, numero_aulas;
    float salario_liquido, salario_bruto;

    printf("Digite o valor da hora aula: ");
    scanf("%d", &valor_hora_aula);
    printf("Quantas aulas voce dar por mes: ");
    scanf("%d", &numero_aulas);
    printf("Qual o desconto que voce tem no INSS: ");
    scanf("%d", &percentual_inss);

    salario_liquido=(valor_hora_aula*numero_aulas)-((valor_hora_aula*numero_aulas)*percentual_inss/100.00);

    printf("O seu salario liquido  eh %.2f", salario_liquido);

    return 0;
}