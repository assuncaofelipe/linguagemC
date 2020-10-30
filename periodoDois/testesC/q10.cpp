#include <stdio.h>
#include <stdlib.h>
#define T 10
int main(){
	float A[T],aux, aux2;
	int i,j=T-1;
	
	for(i = 0; i < T; i++){
		A[i] = 1 + rand() % 10;
		printf("A[%d] = %.0f \n",i,A[i]);
	}	printf("\n-------------------\n\n");
	
	for(i = 0; i < T/2; i++){
		aux = A[j];
		aux2 = A[i];
		A[i] = aux;
		A[j] = aux2;
		j--;
	}
	
	for(i = 0; i < T; i++)
		printf("A[%d] = %.0f \n",i,A[i]);
	return 0;
}
