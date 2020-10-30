#include <stdio.h>
#include <stdlib.h>
#define M 50
int main(){
	float vA[M],vB[M], soma = 0;
	int i,j=M-1;
	for(i = 0; i < M; i++){
		vA[i] = 1 + rand() % 6;
		vB[i] = 1 + rand() % 12;
	}
	for(i = 0; i < M; i++){
		printf("vetor A[%d] = %.0f - vetor B[%d] = %.0f\n", i, vA[i], i, vB[i]);
	}
	for(i = 0; i < M; i++){

		soma = soma + (vA[i] - vB[j]);	
		j-=1;

	}
printf("%.0f", soma);

	return 0;
}
