#include <stdio.h>
int main(){
    char nome[50];
    int sexo, qtdH=0, qtdM=0;
    for (int i=0; i!=50; i++){
        printf("Nome: "); scanf("%s",nome);
        printf("Sexo(1 – Masculino / 2 - Feminino): "); scanf("%d",&sexo);
        printf("Nome: %s\n",nome);
        sexo==1 ? printf("Masculino\n") : printf("Feminino\n");
        if (sexo ==1){
            qtdH+=1;
        } else {qtdM+=1;}
    }
    printf("Quantidade de homens: %d\n",qtdH);
    printf("Quantidade de mulheres: %d",qtdM);
}
