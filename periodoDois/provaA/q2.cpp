#include<stdio.h>
#include<stdlib.h>

#define M 20

int main(){
	int v[M];
	int i, j, maior1 = 0, maior2 = 0;
	int media, soma=0;
	bool rep;

	for (i=0; i < M ; i++){
		v[i] = 1 + rand()%1000;
		printf("\tvalor: %d \n", v[i]);
		
		//verifica os dois maiores
		if (v[i] > maior1)
		   maior1 = v[i];
		if (v[i] <= maior1)
		   maior2 = v[i];
		   v[i] = maior2;
		//calculo da media do vetor   
		soma = soma + v[i];
	} 	media = soma/M;
	
	//verifica igualdade
	for(i=0;i<M;i++){
		for(j = 0; j < M; j++){
			if((v[i] == v[j]) == true)
				rep++;
			else {
				rep++;
	}   }	}
    
	printf("\n\tMaiores: %d e %d", maior1, maior2);
	printf("\n\tMedia: %d", media);
	printf("\n\tRepetido: %d", rep);
	
	return 0;
}
