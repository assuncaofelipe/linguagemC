#include <stdio.h>
int main(){
    char nome[50];
    int sexo, idade;
    printf("Nome: "); scanf("%s",nome);
    printf("Sexo (1-M,2-F): "); scanf("%d",&sexo);
    printf("Idade: "); scanf("%d",&idade);
    sexo == 2 && idade<25 ? printf("%s, aceita!",nome) : printf("Não aceita!");
    return 0;
}
