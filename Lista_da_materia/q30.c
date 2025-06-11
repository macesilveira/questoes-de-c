/* Um posto está vendendo combustíveis com a seguinte tabela de descontos:

Álcool Até 25 litros, desconto de 2% por litro
Acima de 25 litros, desconto de 4% por litro
Gasolina Até 25 litros, desconto de 3% por litro
Acima de 25 litros, desconto de 5% por litro

Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível
(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser
pago pelo cliente sabendo que o preço do litro da gasolina é R$ 2,70 e o preço do litro do álcool é R$ 1,90 */

#include <stdio.h>
#include <ctype.h>

#define preco_gasolina 2.70
#define preco_alcool 1.90

int main (){

    char tipo_combustivel;
    float novo_preco_litro_alcool,novo_preco_litro_gasolina,valor_total;
    int litros_combustivel;

    printf("Qual tipo de combustivel o cliente pediu? Digite 'A' para Alcool e 'G' para Gasolina: ");
    scanf("%c", &tipo_combustivel);
    printf("Quantos litros ele quer? ");
    scanf("%d",&litros_combustivel);
    
    if (litros_combustivel<=0){
        printf("INVALIDO! COLOQUE A QUANTIDADE DE LITROS VALIDA");
        return 0;
    }

    tipo_combustivel=tolower(tipo_combustivel);

    if (tipo_combustivel=='a'){
        if (litros_combustivel<25){
            novo_preco_litro_alcool=preco_alcool-preco_alcool*0.02;
        } else { 
            novo_preco_litro_alcool=preco_alcool-preco_alcool*0.04; 
        }
        
        valor_total=litros_combustivel*novo_preco_litro_alcool;
        
        printf("O cliente colocou %d litros de alcool.\n", litros_combustivel);
        printf("Com essa quantidade, o valor do litro de alcool com desconto fica R$%.2f\n", novo_preco_litro_alcool);
        printf("O valor total a ser pago pelo cliente eh R$%.2f", valor_total);

    } else if (tipo_combustivel=='g'){
        if (litros_combustivel<25){
            novo_preco_litro_gasolina=preco_gasolina-preco_gasolina*0.03;
        } else { 
            novo_preco_litro_gasolina=preco_gasolina-preco_gasolina*0.05; 
        }
        
        valor_total=litros_combustivel*novo_preco_litro_gasolina;
        
        printf("O cliente colocou %d litros de gasolina.\n", litros_combustivel);
        printf("Com essa quantidade, o valor do litro de gasolina com desconto fica R$%.2f\n", novo_preco_litro_gasolina);
        printf("O valor total a ser pago pelo cliente eh R$%.2f", valor_total);
    } else {
        printf("Tipo de combustivel invalido! Digite 'A' para Alcool ou 'G' para Gasolina.");
    }


    return 0;
}