#include <stdio.h>
#include <stdlib.h>
#define T 10
int main(){
	float X[T],Y[T],Z[T];
	int i;
	
	for(i = 0; i < T; i++){
		X[i] = 1 + rand() % 5;
		Y[i] = 1 + rand() % 10;
		printf("X[%d] = %.0f \t---- \tY[%d] = %.0f\n",i,X[i],i,Y[i]);
	} 	printf("\n\n\n");
	
	for(i = 0; i < T; i++){
		Z[i] = X[i] * Y[i];
		printf("Z[%d] = %.0f\n",i,Z[i]);
	}
	return 0;
}
