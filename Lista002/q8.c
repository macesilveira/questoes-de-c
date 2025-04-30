/* Dado um numero de conta corrente com três dígitos, retorne o seu digito verificador, o qual é calculado da
seguinte maneira. Exemplo: numero conta 235, somar o numero da conta com seu inverso : 235+532=767.
Multiplicar cada digito pela sua ordem posicional e somar estes resultados: 7 6 7 (7x1+6x2+7x3) = 40. O
ultimo digito desse resultado é o digito verificador da conta (40-> 0 ) */

#include <stdio.h>

int main(){
    
    int conta_corrente, primeiro, segundo, terceiro, inverso_conta_corrente, numero_somado, primeiro_soma, segundo_soma, terceiro_soma, ultimos_digitos, soma_dosdigitos, digito_verificador;

    printf("Qual os tres dígitos da sua conta corrente? ");
    scanf("%d", &conta_corrente);

    // Seperando os dígitos da conta corrente
    primeiro=conta_corrente/100;
    segundo=(conta_corrente%100)/10;
    terceiro=(conta_corrente%100)%10;

    inverso_conta_corrente=terceiro*100+segundo*10+primeiro;

    numero_somado=conta_corrente+inverso_conta_corrente;

    ultimos_digitos=numero_somado%1000;

    primeiro_soma=ultimos_digitos/100;
    segundo_soma=(ultimos_digitos%100)/10;
    terceiro_soma=(ultimos_digitos%100)%10;

    soma_dosdigitos=primeiro_soma*1+segundo_soma*2+terceiro_soma*3;

    digito_verificador=soma_dosdigitos%10;

    printf("O digito verificador da sua conta eh %d", digito_verificador);

    return 0;
}