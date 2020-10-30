#include <stdio.h>
#include <stdlib.h>
#define T 10
int main() {
	int X[T],Y[T],i, j,cont;
	for(i = 0; i < T; i++) {
		scanf("%d",&X[i]);
	}
	for(i = 0; i < T; i++) {
		printf("X[%d] = %d \n",i,X[i]);
	}
	j = T - 1;
	for(i = 0; i < T; i++) {
		Y[i] = X[j];
		j--;
	}
	cont = 0;
	for(i = 0; i < T; i++) {
		if(X[i] == Y[i]) {
			cont++;
		}
	}
	if(cont == T){
		printf("e palindromo"); }
	else {
		printf("Nao e"); }

}
