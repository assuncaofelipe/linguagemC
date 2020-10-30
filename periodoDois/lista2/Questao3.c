#include <stdio.h>

typedef struct{
    char nome[30];
    int idade;
    char endereco[30];
}dado;

int main()
{
    dado aluno;

    printf("Nome: ");
    scanf("%[^\n]s", aluno.nome);
    printf("Idade: ");
    scanf("%d", &aluno.idade);
    setbuf(stdin, NULL);
    printf("Endereco: ");
    scanf("%[^\n]s", aluno.endereco);
    
    printf("\nNome: %s\n",aluno.nome);
    printf("Idade: %d\n",aluno.idade);
    printf("Endereco: %s\n",aluno.endereco);

    return 0;
}