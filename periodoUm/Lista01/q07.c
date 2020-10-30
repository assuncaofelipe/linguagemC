#include <stdio.h>
int main(){
    char nome[50];
    float sal, totVendas;
    printf("Informe o nome: ");
    scanf("%s",&nome);
    printf("Informe o salario: ");
    scanf("%f",&sal);
    printf("Informe o total de vendas: ");
    scanf("%f",&totVendas);
    sal += (totVendas*15) / 100;
    printf("Nome: %s\nSalário: %.2f",nome,sal);
    return 0;
}
