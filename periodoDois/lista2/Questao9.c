#include<stdio.h>

typedef struct{
    long int cpf;
    char nome[30];
}dadoProprietario;

typedef struct{
    char modelo[30];
    int ano;
    char placa[7];
    dadoProprietario proprietario;
}dadoCarro;

int main()
{
    dadoCarro carro;

    printf("Modelo: ");
    scanf("%[^\n]s", carro.modelo);
    setbuf(stdin, NULL);
    printf("Ano: ");
    scanf("%d", &carro.ano);
    setbuf(stdin, NULL);
    printf("Placa: ");
    scanf("%[^\n]s", carro.placa);
    setbuf(stdin, NULL);
    printf("CPF: ");
    scanf("%ld", &carro.proprietario.cpf);
    setbuf(stdin, NULL);
    printf("Nome: ");
    scanf("%[^\n]s", carro.proprietario.nome);
    printf("Modelo: %s\nAno: %d\nPlaca: %s\n", carro.modelo, carro.ano, carro.placa);
    printf("CPF: %ld\nNome: %s\n", carro.proprietario.cpf, carro.proprietario.nome);
    return 0;
}