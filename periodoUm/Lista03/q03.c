#include <stdio.h>
int main(){
    float sal=500, com=50, valorVenda=5, totVendas, salTot;
    int  cVendidos;
    char nome[50];
    printf("Nome: "); scanf("%s",nome);
    printf("Carros vendidos: "); scanf("%d",&cVendidos);
    printf("Total de vendas: "); scanf("%f",&totVendas);
    salTot+= sal + (cVendidos*com) + (totVendas*valorVenda)/100;
    printf("Salario: %.2f",salTot);
    return 0;
}
