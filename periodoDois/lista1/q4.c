#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int main(){
	int indice, num, i, v[MAX], maior = 0;

	for (i=0; i < MAX ; i++){
		num = 1 + rand()%1000;
		printf("%d\n", num);
		
		v[i] = num;
		
		if(v[i] > maior){
			maior = num;
			indice = i;
		}
	}
	printf("valor do maior: %d", maior);
	printf("\nPosicao do maior: %d", indice);	
	return 0;
}

