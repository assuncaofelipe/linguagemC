#include<stdio.h>
#include<stdlib.h>

#define MAX 20

int main(){
	int v[MAX];
	int i, j, aux;
	for (i = 0; i < MAX; i++){
		v[i] = 1 + rand()%1000;
		printf("%i\n", v[i]);
	}
	for (i = 1; i<MAX; i++){
		aux = v[i];
	 	for(j = i; (j > 0) && (aux < v[j-1]); j--){
	 		v[j] = v[j-1];
	 		v[j] = aux;
		}
 	printf("%i\n", v[j]);
	}
	return 0;
}

