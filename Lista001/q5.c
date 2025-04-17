#include <stdio.h>

int main(){

    int segundos_horas=3*3600, segundos_minutos=23*60, segundos=17, 
    segundos_total=segundos+segundos_horas+segundos_minutos;
    printf("Em 3 horas, 23 minutos e 17 segundos tem %d", segundos_total);
    
    return 0;
}


