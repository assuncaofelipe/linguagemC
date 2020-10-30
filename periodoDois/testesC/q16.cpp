#include <stdio.h>
#include <stdlib.h>
#define T 10

int main(){
	int X[T],Y[T],i, p = 0;
	for(i = 0; i < T; i++){
		X[i] = 1 + rand() % 10;
		Y[i] = 1 + rand() % 10;
	}
	for(i = 0; i < T; i++){
		printf("X[%d] = %d \n",i,X[i]);
		printf("Y[%d] = %d \n",i,Y[i]);
	}
	for(i = 0; i < T; i++)
		p += (X[i]*Y[i]);
	printf("Produto Escalar: %d",p);
}
