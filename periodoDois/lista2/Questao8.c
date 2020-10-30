#include<stdio.h>

typedef struct{
    char logradouro[50];
    int numero;
    char bairro[30];
    long int cep;
}dadoEndereco;

typedef struct{
    int matricula;
    char nome[50];
    dadoEndereco endereco;
}dadoCliente;

int main()
{
    dadoCliente cliente;
    printf("Matricula: ");
    scanf("%d", &cliente.matricula);
    setbuf(stdin, NULL);
    printf("Nome: ");
    scanf("%[^\n]s", cliente.nome);
    setbuf(stdin, NULL);

    printf("Logradouro: ");
    scanf("%[^\n]s", cliente.endereco.logradouro);
    printf("Numero: ");
    scanf("%d", &cliente.endereco.numero);
    setbuf(stdin, NULL);
    printf("Bairro: ");
    scanf("%[^\n]s", cliente.endereco.bairro);
    printf("Cep: ");
    scanf("%ld", &cliente.endereco.cep);

    printf("\n\nMatricula: %d\nNome: %s\nLogradouro: %s\n", cliente.matricula, cliente.nome, cliente.endereco.logradouro);
    printf("Numero: %d\nBairro: %s\nCep: %ld\n", cliente.endereco.numero, cliente.endereco.bairro, cliente.endereco.cep);
    return 0;
}