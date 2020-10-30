#include <stdio.h>
int main(){
    int n,cont=1,soma=0;
    printf("Numero: "); scanf("%d",&n);
    while (cont!=n){
        if (n%cont==0){
            soma+=cont;
        }
        cont++;
    }
    soma==n ? printf("Numero perfeito!") : printf("Não é perfeito!");
    return 0;
}
