#include<stdio.h>
#include<stdlib.h>

#define MAX 50

int main(){
	int vet[MAX], i, par = 0;

	// preenche o vetor
	for (i=0; i < MAX ; i++){
		vet[i] = 1 + rand()%1000;
		printf("%i\n", vet[i]);
	}
	
	//verifica se é par
	for(i=0; i<MAX; i++){
		if(vet[i] % 2 == 0)
		   par += 1;
	}
	
	printf("\nQuantidade de pares %i\n", par);
	return 0;
}
