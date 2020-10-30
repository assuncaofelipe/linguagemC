#include <stdio.h>
int main(){
    int a;
    printf("Numero: "); scanf("%d",&a);
    a%2 == 0 ? printf("Par") : printf("Ímpar");
    return 0;
}
