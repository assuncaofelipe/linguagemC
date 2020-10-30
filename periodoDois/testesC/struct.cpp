#include<stdio.h>
#include<stdlib.h>

#define MAX 3
#define N 3

typedef struct aluno {
	char nome[30];
	float nota[N];
	float media;
}Aluno;

int main(){
	Aluno a[MAX];
	float soma, media;
	int i, j;
	
	for(i=0; i<MAX; i++){
		printf("a[%i]\n", i);
		
		printf("Nome: ");
		scanf("%s", &a[i].nome);
		
		for(j=0; j<N; j++){
			printf("Nota %d: ", j+1);
			scanf("%f", &a[i].nota[j]);
			soma += a[i].nota[j];
		}
		
		a[i].media = soma/N;
		soma = 0;
		printf("\n- - - - - - -\n");
	}
	
	for(i=0; i < MAX; i++){
		printf("Nome: %s - média: %.2f\n\n", a[i].nome, a[i].media);
	}
	
	return 0;
}
