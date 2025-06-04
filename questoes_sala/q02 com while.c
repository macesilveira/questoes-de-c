#include <stdio.h>

int main(){
	
	int corridainicial=5000, i=1, corridafinal=42195;
	
	while(corridainicial<corridafinal){
		corridainicial=corridainicial+200;
		i=i++;
	}
	
	printf("Vai demorar %d dias para ela chegar na distancia da maratona", i);
	
}