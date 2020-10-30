#include <stdio.h>
int main(){
    int valCompra, valPago, troco, n1=0, n10=0, n100=0;
    printf("Valor da compra: "); scanf("%d",&valCompra);
    printf("Valor a pagar: "); scanf("%d",&valPago);
    troco = valPago-valCompra;
    printf("Valor da compra: %d\n",valCompra);
    printf("Valor do troco: %d\n",troco);

    if (troco>=100) {
        n100 = troco/100;
        troco -= n100*100;
    }
    if (troco >=10){
        n10 = troco/10;
        troco -= n10*10;
    }
    if (troco >=1){
        n1 = troco/1;
        troco -= n1*1;
    }

    printf("%d notas de 100\n",n100);
    printf("%d notas de 10\n",n10);
    printf("%d notas de 1\n",n1);
    return 0;
}
