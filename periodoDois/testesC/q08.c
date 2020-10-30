#include <stdio.h>
#include <stdlib.h>
#define T 50
int main(){
	int A[T],B[T],C[T];
	int i;
	int c = 0, b = 0;
	for(i = 0; i < T; i++){
		A[i] = 1 + rand() % 100;
		printf("Vetor A: %i\n", A[i]);
	}
	printf("\n--------\n");
	
	for(i = 0; i < T; i++){
		if(A[i] % 2 == 0){
			B[b] = A[i];
			b++;
		}
		else{
			C[c] = A[i];
			c++;
		}		
	}
	for(i = 0; i < b; i++) {	printf("B[%d] = %d\n",i,B[i]);	}
	
	printf("\n--------\n");
	
	for(i = 0; i < c; i++){		printf("C[%d] = %d\n",i,C[i]);	}
}
