#include <stdio.h>
#include <stdlib.h>
#define T 30

int main(){
	int vA[T], vB[T], i;

	for(i = 0; i < T; i++)
		vA[i] = 1 + rand() % 100;
	
	for(i = 0; i < T; i++)
		vB[i] = 1 + i;		
		
	for(i = 0; i < T; i++)
		printf("A[%d] = %d\n", i, vA[i]);	
		
	for(i = 0; i < T; i++)
		printf("B[%d] = %d\n", i, vB[i]);	
}
