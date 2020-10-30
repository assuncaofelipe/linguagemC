#include<stdio.h>

#define TAM 5

typedef struct{
    char nome[30];
    char matricula[15];
    char curso[30];
}dado;

int main()
{
    dado aluno[TAM];
    int i;

    for(i = 0; i < TAM; i++){
        setbuf(stdin, NULL);
        printf("Matricula: ");
        scanf("%[^\n]s", aluno[i].matricula);
        setbuf(stdin, NULL);
        printf("Nome: ");
        scanf("%[^\n]s", aluno[i].nome);
        setbuf(stdin, NULL);
        printf("Curso: ");
        scanf("%[^\n]s", aluno[i].curso);
    }

    for(i = 0; i < TAM; i++){
        printf("Nome: %s\nMatricula: %s\nCurso: %s\n", aluno[i].nome,
		aluno[i].matricula, aluno[i].curso);
    }
    
    return 0;
}