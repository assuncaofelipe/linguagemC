#include <stdio.h>
int main(){
    int idade, dias;
    printf("Informe quantos anos você tem: "); scanf("%d",&idade);
    dias = idade*12*30;
    printf("Você já viveu %d dias",dias);
    return 0;
}
