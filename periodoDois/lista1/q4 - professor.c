#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int main(){
	int A[MAX], i, m;

	for (i=0; i < MAX ; i++){
		A[i] = 1 + rand()%1000;
	}
	for(i=0; i<MAX; i++){
		printf("%d", A[i]);
	}
	
	m = 0;
	for(i=1; i<MAX; i++){
		if(A[i] > A[m])
		    m = i;
	}
	printf("Maior elemento: %d\n", A[m]);
	printf("Indice: %d\n", m);
	return 0;
}

