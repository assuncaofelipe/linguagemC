#include <stdio.h>
int main(){
    float w=1;
    int rep;
    printf("Limite: "); scanf("%d",&rep);
    for (float i=2;i<=rep;i++){
        w = w + (1/i);

    }
    printf("Valor de W: %.1f",w);
}
