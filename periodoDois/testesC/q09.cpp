#include <stdio.h>
#include <stdlib.h>
#define T 50
int main(){
	float X[T],aux, aux2;
	int i,j=T-1;
	for(i = 0; i < T; i++){
		X[i] = 1 + rand() % 10;
	}
	
	for(i = 0; i < T; i++){
		printf("X[%d] = %.0f \n",i,X[i]);
	}
	
	printf("---------\n");
	for(i = 0; i < T/2; i++){
		aux = X[j];
		aux2 = X[i];
		X[i] = aux;
		X[j] = aux2;
		j--;
	}
	
	for(i = 0; i < T; i++){
		printf("X[%d] = %.0f \n",i,X[i]);
	}
	
}
