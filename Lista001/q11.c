#include <stdio.h>

int main(){

    float total_cerveja=75*2.20,
          total_macarrao=2*8.73,
          total_molho=1*3.45,
          total_cebola=(420/1000)*5.40,
          total_alho=(250/1000)*30,
          total_pao=(450/1000)*25,
          total_gasto=(total_alho+total_cebola+total_cerveja+total_macarrao+total_molho+total_pao),
          gasto_dividido=total_gasto/5;  
    printf ("O gasto total ficou R$%.2f, dividido entre os 5 amigos ficou R$%.2f", total_gasto, gasto_dividido);

    return 0; 
}