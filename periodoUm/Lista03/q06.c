#include <stdio.h>
int main(){
    int num;
    printf("Numero: "); scanf("%d",&num);
    num%3 == 0 && num%7 == 0 ? printf("É divisível por 3 e 7") : printf("");
    return 0;
}
