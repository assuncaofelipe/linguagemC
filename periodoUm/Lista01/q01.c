#include <stdio.h>
int main(){
    int a,b,c,d, diferenca;
    printf("Valor de a: ");
    scanf("%d",&a);
    printf("Valor de b: ");
    scanf("%d",&b);
    printf("Valor de c: ");
    scanf("%d",&c);
    printf("Valor de d: ");
    scanf("%d",&d);
    diferenca = (a*b) - (c*d);
    printf("Diferença: %d",diferenca);
    return 0;
}
