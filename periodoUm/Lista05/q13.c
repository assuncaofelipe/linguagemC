#include <stdio.h>
int main(){
    int soma=3,n=3,ant;
    while (n<6561){
        printf("%d\n",n);
        n*=3;
        soma+=n;
    }
    printf("%d\n%d",n,soma);
    return 0;
}
