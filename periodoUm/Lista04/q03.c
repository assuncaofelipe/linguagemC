#include <stdio.h>
int main(){
    char nome1[50], nome2[50], nome3[50];
    float valVenda1, valVenda2, valVenda3, comissao1, comissao2, comissao3;
    printf("Nome1: "); scanf("%s",nome1);
    printf("Valor da venda1: "); scanf("%f",&valVenda1);
    printf("Nome2: "); scanf("%s",nome2);
    printf("Valor da venda2: "); scanf("%f",&valVenda2);
    printf("Nome3: "); scanf("%s",nome3);
    printf("Valor da venda3: "); scanf("%f",&valVenda3);
    if (valVenda1>50000) {comissao1 = (12*valVenda1)/100;}
    else if (valVenda1>=30000 && valVenda1<=50000) {comissao1 = (9.5*valVenda1)/100;}
    else {comissao1 = (7*valVenda1)/100;}

    if (valVenda2>50000) {comissao2 = (12*valVenda2)/100;}
    else if (valVenda2>=30000 && valVenda2<=50000) {comissao2 = (9.5*valVenda2)/100;}
    else {comissao2 = (7*valVenda2)/100;}

    if (valVenda3>50000) {comissao3 = (12*valVenda3)/100;}
    else if (valVenda3>=30000 && valVenda3<=50000) {comissao3 = (9.5*valVenda3)/100;}
    else {comissao3 = (7*valVenda3)/100;}

    printf("%s: %.2f\n",nome1,comissao1);
    printf("%s: %.2f\n",nome2,comissao2);
    printf("%s: %.2f\n",nome3,comissao3);
    printf("Total de vendas: %.2f",valVenda1+valVenda2+valVenda3);
    return 0;
}
