#include <stdio.h>
int main(){
    int n,soma=0;
    for (int i=0; i!=10; i++){
        printf("Numero: "); scanf("%d",&n);
        if (n<40){
            soma+=n;
        }
    }
    printf("Soma dos menores de 40: %d",soma);
    return 0;
}
