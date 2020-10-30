#include <stdio.h>
#include <stdlib.h>
#define T 30

int main(){
	float A[T],Z[T];
	int i,k;
	
	for(i = 0; i < T; i++){
		A[i] = 1 + rand() % 100;
		printf("A[%d] = %.0f\n",i,A[i]);
	}
	printf("k:\n");
	scanf("%d",&k);
	
	for(i = 0; i < T; i++){
		Z[i] = A[i] * k;
		printf("Z[%d] = %.0f\n",i,Z[i]);
	}
	return 0;
}
