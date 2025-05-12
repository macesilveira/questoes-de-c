/* Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e
calcular a altura do prédio */

#include <stdio.h>

int main (){

    float altura_pessoa, altura_sombra_pessoa, altura_sombra_predio, altura_predio;
    
    printf("Sua altura (em metros): ");
    scanf("%f", &altura_pessoa);
    printf("Altura da sua sombra (em metros): ");
    scanf("%f", &altura_sombra_pessoa);
    printf("Altura da sombra do predio (em metros): ");
    scanf("%f", &altura_sombra_predio);

    altura_predio=(altura_pessoa/altura_sombra_pessoa)*altura_sombra_predio;

    printf("A altura do predio eh %.1f metros", altura_predio);
    

    return 0;
}