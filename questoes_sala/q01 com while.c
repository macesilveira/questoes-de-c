#include <stdio.h>

int main(){
	
	float divida =1000, dobrodadivida;
	int i=0;
	
	dobrodadivida=divida*2;
	
	while (divida<dobrodadivida){
		divida=divida*1.03;
		i=i+1;
		
	}
	
	
	printf("A divida vai dobrar em %d meses", i);
	
	return 0;
}