/* Escreva um programa que calcula o desconto previdenciário de um funcionário. Dado um
salário, o programa deve retornar o valor do desconto proporcional ao mesmo. O cálculo
segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de
desconto é 334,29, o que seja menor. */

#include <stdio.h>

#define desconto_maximo 334.29

int main (){

    float salario, desconto;

    printf("Salario: ");
    scanf("%f", &salario);

    desconto=salario*0.11;

    if (desconto>desconto_maximo){
        printf("Valor do seu desconto previdenciario: R$334.29");
    } else {
        printf("Valor do seu desconto previdenciario: R$%.2f", desconto);
    }

    return 0;
}