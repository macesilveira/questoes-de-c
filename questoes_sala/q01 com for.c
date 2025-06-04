#include <stdio.h>


int main(){
	
	float divida =1000, dobrodadivida;
	
	
	dobrodadivida=divida*2;
	
	int i=0;
	
	for(i; divida<dobrodadivida;i++){
		divida=divida*1.03;
		
	}
	
	printf("A divida vai dobrar em %d meses", i);
	
	return 0;
}