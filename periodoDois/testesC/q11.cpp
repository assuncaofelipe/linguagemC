#include <stdio.h>
#include <stdlib.h>
#define T 100
int main(){
	int V[T], maior, menor;
	int i, ima, ime;
	
	for(i = 0; i < T; i++){
		V[i] = 1 + rand() % 100;
		printf("B[%d] = %d\n",i,V[i]);	
		menor = V[0];
		maior = V[0]; 
	}
	
	for(i = 0; i < T; i++){
		if(maior < V[i]){
			maior = V[i];
			ima = i;		
		}
		if(V[i] < menor){
			menor = V[i];
			ime = i;
		} 	}
	printf("maior: %d, indice: %d\nmenor: %d, indice: %d\n",maior,ima,menor,ime);
	return 0;
}
