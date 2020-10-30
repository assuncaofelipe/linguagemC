#include<stdio.h>
#define TAM 5

typedef struct{
    char nome[15];
    float potencia;
    float tempo;
}dadoEletro;

int main()
{
    dadoEletro eletro[TAM];
    int i, t;
    float soma = 0, consumoRelativo, consumoTotal;

    for(i = 0; i < TAM; i++){
        printf("Nome: ");
        scanf("%[^\n]s", eletro[i].nome);
        printf("Potencia: ");
        scanf("%f", &eletro[i].potencia);
        printf("Tempo ativo por dia: ");
        scanf("%f", &eletro[i].tempo);
        setbuf(stdin, NULL);
    }
    printf("Dias: ");
    scanf("%d", &t);
    for(i = 0; i < TAM; i++){
        soma = soma + (eletro[i].potencia * eletro[i].tempo);
    }
    consumoTotal = soma * t;
    printf("Consumo total: %f\n", consumoTotal);
    for(i = 0; i < TAM; i++){
        consumoRelativo = (((eletro[i].potencia * eletro[i].tempo) * t) / consumoTotal) * 100;
        printf("Nome: %s\nConsumo relativo: %f\n\n", eletro[i].nome, consumoRelativo);
    }
    return 0;
}