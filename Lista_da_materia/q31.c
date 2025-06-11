/* No Futebol Americano, usa-se o Quarterback Rating como um índice que indica o desempenho do quarterback (quando maior, melhor). 

Ele é calculado da seguinte forma: 

Calcula-se o percentual de passes completados em relação aos passes tentados
pelo quarterback. Deste valor subtrai-se 0,3 e divide-se por 0,2. 
Este valor não deve ser maior que 2,375 ou menor que 0 (caso seja, ajusta-se o valor para 2,375 ou 0,
respectivamente).


Em seguida, calcula-se a razão de jardas passadas pela quantidade de passes tentados.
Deste valor, subtrai-se 3 e divide-se por 4. Novamente, este valor não deve ser maior que
2,375 ou menor que 0 (caso seja, procede-se como no caso anterior).

Agora, calcula-se a razão de passes para touchdows pelo número de passes tentados.
Divide-se o valor por 0,05. Mais uma vez, este valor não deve ser maior que 2,375 ou
menor que 0 (caso seja, procede-se como de costume).


Então, calcula-se a razão entre passes interceptados e o número de passes tentados. Deste
valor, subtrai-se 0,095 e divide-se o resultado por 0,04. Como de praxe, este valor não
deve ser maior que 2,375 ou menor que 0 (caso seja, atua-se como explicado).


O quarterback rating é calculando somando-se as quatro parcelas anteriores,
multiplicando a soma por 100 e dividindo-se o produto por 6.


Escreva um programa, que leia o número de passes tentados, o número de passes
completos, o número de jardas passadas, o número de passes para touchdown e o número
de passes interceptados e informe o QB Rating do quarterback. */

#include <stdio.h>

int main(){

    float percentual, razao_dejardas, razao_detouchdown,razao_deinterceptados; 
    float passes_tentados, passes_completados, jardas_passadas, passes_para_touchdown, passes_interceptados;
    float parcela1, parcela2, parcela3, parcela4;

    printf("Quantos passes foram tentados?\n");
    scanf("%f", &passes_tentados);
    printf("Quantos passes foram completados?\n");
    scanf("%f", &passes_completados);
    printf("Quantas jardas foram passadas?\n");
    scanf("%f", &jardas_passadas);
    printf("Quantos passes para touchdown?\n");
    scanf("%f", &passes_para_touchdown);
    printf("Quantos passes foram interceptados?\n");
    scanf("%f", &passes_interceptados);

    //parcela 1
    percentual=passes_completados/passes_tentados;
    parcela1=(percentual-0.3)/0.200;

    if (parcela1>2.375){
        parcela1=2.375;
    } else if (parcela1<0){
        parcela1=0;
    }

    //parcela2
    razao_dejardas=jardas_passadas/passes_tentados;
    parcela2=(razao_dejardas-3)/4.000;

    if (parcela2>2.375){
        parcela2=2.375;
    } else if (parcela2<0){
        parcela2=0;
    }

    //parcela3
    razao_detouchdown=passes_para_touchdown/passes_tentados;
    parcela3=razao_detouchdown/0.050;

    if (parcela3>2.375){
        parcela3=2.375;
    } else if (parcela3<0){
        parcela3=0;
    }

    //parcela4
    razao_deinterceptados=passes_interceptados/passes_tentados;
    parcela4=(0.095-razao_deinterceptados)/0.040;

    if (parcela4>2.375){
        parcela4=2.375;
    } else if (parcela4<0){
        parcela4=0;
    }

    //calculo quartebeck rating 
    float quartebeck_rating;

    quartebeck_rating=(parcela1+parcela2+parcela3+parcela4)*100/6.00;

    printf("O Quartebeck Rating eh: %.2f\n", quartebeck_rating);

    return 0;
}