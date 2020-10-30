#include <stdio.h>
int main(){
    int num=0, op=0;
    float saldo=0, valOp=0;
    printf("Número: "); scanf("%d",&num);
    printf("Saldo: "); scanf("%f",&saldo);
    printf("1-Depósito 2-Saque: "); scanf("%d",&op);
    printf("Valor da operação: "); scanf("%f",&valOp);
    op == 1 ? (saldo+=valOp) : (saldo-=valOp);
    if (saldo<0) {printf("Conta estourada!\n");}
    printf("Saldo atual: %.2f",saldo);
    return 0;
}
