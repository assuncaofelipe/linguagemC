#include<stdio.h>

typedef struct{
    long int cpf;
    char nome[30];
}dadoProfessor;

typedef struct{
    int codigo;
    char nome[30];
    dadoProfessor professor;
}dadoDisciplina;

typedef struct{
    int matricula;
    char nome[30];
    dadoDisciplina disciplina;
}dadoAluno;

int main()
{
    dadoAluno aluno;
    printf("Matricula: ");
    scanf("%d", &aluno.matricula);
    setbuf(stdin, NULL);
    printf("Nome: ");
    scanf("%[^\n]", aluno.nome);
    printf("Codigo disciplina: ");
    scanf("%d", &aluno.disciplina.codigo);
    setbuf(stdin, NULL);
    printf("Nome disciplina: ");
    scanf("%[^\n]s", aluno.disciplina.nome);
    printf("CPF professor: ");
    scanf("%ld", &aluno.disciplina.professor.cpf);
    setbuf(stdin, NULL);
    printf("Nome professor: ");
    scanf("%[^\n]s", aluno.disciplina.professor.nome);

    printf("Matricula: %d\nNome: %s\nCodigo disciplina: %d\n", aluno.matricula, aluno.nome, aluno.disciplina.codigo);
    printf("Nome disciplina: %s\nCPF professor: %ld\n", aluno.disciplina.nome, aluno.disciplina.professor.cpf);
    printf("Nome professor: %s\n", aluno.disciplina.professor.nome);
    return 0;
}