#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int main(){
	int v[MAX], aux, i;

	printf("VETOR NAO ORDENADO\n");
	for (i=0; i < MAX ; i++){
		v[i] = 1 + rand()%1000;
		printf("%i\n", v[i]);
	}
	printf("\nVetor ordenado em crescente\n\n");
	for(int x=0; x<MAX; x++){
		for(int y=x; y < MAX; y++){
			if(v[x] > v[y]){
				aux = v[x];
				v[x] = v[y];
				v[y] = aux;
			}
		}
	}
	for(i=0; i<MAX;i++)
		printf("numero %i = %i\n", i, v[i]);
	return 0;
}
