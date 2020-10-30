#include<stdio.h>
#include<stdlib.h>

#define MAX 10
 
int main(){
	int v[MAX], soma=0, i;
	
	for(i=0; i<MAX; i++){
		v[i] = 1 + rand() % 100;
		printf(" %d ", v[i]);
		
		soma = soma + v[i];
	}	
	
		printf("\nSoma: %d", soma);
	return 0;
}