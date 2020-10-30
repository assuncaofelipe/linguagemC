#include <stdio.h>
int main(){
    int num, QPares=0, QImpares=0;
    while (1) {
        printf("Numero: ");scanf("%d",&num);
        if (num==-1) { break;}
        num%2==0 ? (QPares+=1) : (QImpares+=1);
    }
    printf("Quantidade de Pares: %d\n",QPares);
    printf("Quantidade de Impares: %d\n",QImpares);
    return 0;
}
