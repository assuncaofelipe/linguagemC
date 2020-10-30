#include <stdio.h>
int main(){
    char nome[50];
    int qtdEleitores, qtdMaisVot;
    printf("Nome do município: "); scanf("%s",nome);
    printf("Quantidade de eleitores: "); scanf("%d",&qtdEleitores);
    printf("Votos do mais votado: "); scanf("%d",&qtdMaisVot);
    if (qtdEleitores > 20000 && qtdMaisVot < ((qtdEleitores*50)/100)){
        printf("Haverá segundo turno!");
    } else {printf("Não haverá segundo turno!");}
    return 0;
}
