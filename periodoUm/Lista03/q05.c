#include <stdio.h>
int main(){
    int num;
    printf("Numero: "); scanf("%d",&num);
    num%5==0 ? printf("É divisível por 5") : printf("Não é divisível por 5");
    return 0;
}
