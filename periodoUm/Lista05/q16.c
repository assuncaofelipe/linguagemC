#include <stdio.h>
int main(){
    int num, a=0, b=1, aux=1;
    printf("Limite: "); scanf("%d",&num);
    while (aux<=num){
        printf("%d\n",aux);
        aux = a+b;
        a=b;
        b=aux;


    }
    return 0;
}
