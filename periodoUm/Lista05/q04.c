#include <stdio.h>
int main(){
    int n,cont=1;
    printf("Numero: "); scanf("%d",&n);
    if (n<0){
        printf("Valor inválido");
    } else {
        for (int i=n; i!=0; i--){
            cont *= i;
        }
    }
    printf("Fat: %d",cont);
    return 0;
}
