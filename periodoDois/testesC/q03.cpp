#include <stdio.h>
#include <stdlib.h>
#define M 5

int main(){
	float vX[M],vY[M], vZ[M];
	int i,j=0;
	for(i = 0; i < M; i++){
		vX[i] = 1 + rand() % 10;
		vY[i] = 1 + rand() % 20;
		printf("vetor X[%d] = %.0f - vetor Y[%d] = %.0f\n", i, vX[i], i, vY[i]);
	}

	printf("\nsoma\n");
	for(i = 0; i < M; i++){
		vZ[i] = vX[i] + vY[i];
		printf("vetor Z[%d] = %.0f\n", i, vZ[i]);
		j+=1;
	}
	printf("\ndiferenca\n");

	for(i = 0; i < M; i++){
		vZ[i] = vX[i] - vY[i];
		printf("vetor Z[%d] = %.0f\n", i, vZ[i]);
	}
	
	printf("\nProduto\n");
	for(i = 0; i < M; i++){
		vZ[i] = vX[i] * vY[i];
		printf("vetor Z[%d] = %.0f\n", i, vZ[i]);
	}
	return 0;
}
