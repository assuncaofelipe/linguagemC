#include <stdio.h>
int main(){
    int num;
    printf("Numero: "); scanf("%d",&num);
    num == 5 ? printf("É igual a 5") : printf("");
    num == 200 ? printf("É igual a 200") : printf("");
    num == 400 ? printf("É igual a 400") : printf("");
    num>500 && num<1000 ? printf("Está no intervalo entre 500 e 1000") : printf("");
    return 0;
}
