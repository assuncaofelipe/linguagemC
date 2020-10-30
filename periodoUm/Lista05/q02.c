
#include <stdio.h>
int main(){
    int N=1,cont=0, valor, contPar=0, contImpar=0;
    printf("Quantidade de valores: "); scanf("%d",&N);
    while (cont!=N){
        printf("Informe um valor: "); scanf("%d",&valor);
        if (valor%2==0){
            contPar+=1;
        }else {
            contImpar +=1;
        }
        cont++;
    }
    printf("Pares: %d\n",contPar);
    printf("Impares: %d",contImpar);

    return 0;
}
