#include <stdio.h>
int main(){
    int num;
    printf("Numero: "); scanf("%d",&num);
    (num%4 == 0 && num%8 == 0) || (num%6 == 0 && num%9 == 0) ? printf("É múltiplo de 4 e 8 ou de 6 e 9") : printf("");
    return 0;
}
