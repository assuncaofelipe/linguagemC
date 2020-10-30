#include<stdio.h>

#define TAM 5

typedef struct{
    char matricula[15];
    char nome[30];
    float nota[3];
}dado;

int main()
{
    dado aluno[TAM];
    float maior, menor, media, soma = 0;
    int i, j, position = 0;
    for(i = 0; i < TAM; i++){
        setbuf(stdin, NULL);
        printf("Matricula: ");
        scanf("%[^\n]s", aluno[i].matricula);
        setbuf(stdin, NULL);
        printf("Nome: ");
        scanf("%[^\n]s", aluno[i].nome);
        for(j = 0; j < 3; j++){
            printf("Nota: ");
            scanf("%f", &aluno[i].nota[j]);
        }
    }
    // Maior nota da primeira prova
    maior = aluno[0].nota[0];
    for(i = 1; i < TAM; i++){
        if(maior < aluno[i].nota[0]){
            maior = aluno[i].nota[0];
            position = i;
        }
    }
    printf("%s tem a maior nota na primeira prova, %f\n\n", aluno[position].nome, maior);
    // Maio media final
    maior = 0;
    for(i = 0; i < TAM; i++){
        for(j = 0; j < 3; j++){
            soma = soma + aluno[i].nota[j];
        }
        media = soma / 3;
        if(media > maior){
            maior = media;
            position = i;
        }
        media = 0;
        soma = 0;
    }
    printf("%s tem a maior media final, %f\n\n", aluno[position].nome, maior);
    // Menor media final
    menor = maior;
    for(i = 0; i < TAM; i++){
        for(j = 0; j < 3; j++){
            soma += aluno[i].nota[j];
        }
        media = soma / 3;
        if(media < menor){
            menor = media;
            position = i;
        }
        media = 0;
        soma = 0;
    }
    printf("%s tem a menor media final, %f\n\n", aluno[position].nome, menor);
    // Alunos aprovados e reprovados
    for(i = 0; i < TAM; i++){
        soma = 0;
        printf("Nome: %s\nSituacao: ", aluno[i].nome);
        for(j = 0; j < 3; j++){
            soma += aluno[i].nota[j];
        }
        media = soma / 3;
        if(media >= 6){
            printf("APROVADO\n\n");
        } else{
            printf("REPROVADO\n\n");
        }
    }
    return 0;
}