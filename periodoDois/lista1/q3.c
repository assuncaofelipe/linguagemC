#include<stdio.h>
#include<stdlib.h>

#define MAX 50

int main(){
	int vetor[MAX], num, 
		mult, valorUser, i;

	for (i=0; i < MAX; i++){
		num = 1 + rand()%1000;
		printf("%d\n", num);
		
		vetor[i] = num;
	}
	
	printf("\nValor: ");
	scanf("%d", &valorUser);
	
	for(i=0; i<MAX; i++){
		mult = valorUser * vetor[i];
		vetor[i] = mult;
		
		printf("\nValor atual do vetor: %d", vetor[i]);
	}
	return 0;
}

