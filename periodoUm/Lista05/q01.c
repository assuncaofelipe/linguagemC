#include <stdio.h>
int main(){
    int soma=0;
    for (int i=86; i<907; i++){
        if (i%2==0){
            printf("%d\n",i);
            soma = soma+i;

        }
    }
    printf("Soma: %d",soma);
    return 0;
}
