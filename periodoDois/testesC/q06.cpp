#include <stdio.h>
#include <stdlib.h>
#define M 50
int main(){
	float vA[M], vB[M], aux, aux2;
	int i,j= M-1;
	
	for(i = 0; i < M; i++){
		vA[i] = 1 + rand() % 100;
		vB[i] = 101 + rand() % 200;
	}
	
	for(i = 0; i < M; i++)
		printf("vet A[%d] = %.0f - vet B[%d] = %.0f \n", i, vA[i], i, vB[i]);
	
	printf("---------\n");
	for(i = 0; i < M; i++){
		aux = vB[j];
		vB[j] = vA[i];
		vA[i] = aux;
		j--;
	}
	
	for(i = 0; i < M; i++)
		printf("vet A[%d] = %.0f - vet B[%d] = %.0f \n",i, vA[i], i, vB[i]);
	return 0;
}

