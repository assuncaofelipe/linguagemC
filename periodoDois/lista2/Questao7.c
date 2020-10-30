#include<stdio.h>
#include<string.h>
#define TAM 5

typedef struct{
    char titulo[30];
    char autor[15];
    int ano;
}dado;

int main()
{
    dado livro[TAM];
    char pesquisar[30];
    int i, cont = 0;

    for(i = 0; i < TAM; i++){
        setbuf(stdin, NULL);
        printf("Titulo: ");
        scanf("%[^\n]s", livro[i].titulo);
        setbuf(stdin, NULL);
        printf("Autor: ");
        scanf("%[^\n]s", livro[i].autor);
        setbuf(stdin, NULL);
        printf("Ano: ");
        scanf("%d", &livro[i].ano);
    }
    // Pegando a pesquisa do usuario
    printf("Nome: ");
    scanf("%[^\n]s", pesquisar);
    for(i = 0; i < TAM; i++){
        if(strcmp(pesquisar,livro[i].titulo) == 0){
            cont++;
            printf("Titulo: %s\nAutor: %s\nAno: %d\n\n", livro[i].titulo, livro[i].autor, livro[i].ano);
        }
    }
    if(cont == 0){
        printf("Nada encontrado\n");
    }
    return 0;
}