#include <stdio.h>
int main(){
    int n,somaPos=0,qtdNeg=0;
    for (int i=0;i!=50;i++){
        printf("Numero: "); scanf("%d",&n);
        if (n>0){somaPos+=n;}
        if (n<0){qtdNeg++;}

    }
    printf("Soma dos positivos: %d\n",somaPos);
    printf("Quantidade de negativos: %d\n",qtdNeg);

    return 0;
}
