#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int main(){
	int vetorA[MAX], vetorB[MAX], soma = 0, num, i;

	printf("Vetor A: \n");
	for (i=0; i < MAX ; i++){
		num = 1 + rand()%1000;
		printf("%d\n", num);
		
		vetorA[i] = num;
	}
	 
	printf("\nVetor B: \n");
	for (i=0; i < MAX ; i++){
		num = 1 + rand()%1000;
		printf("%d\n", num);
		
		vetorB[i] = num;
	}
	
	printf("\nVetor C:\n");
	
	for(i=0; i<MAX; i++){
		soma = vetorA[i] + vetorB[i];
		printf("%d\n", soma);
	}
	return 0;
}

