#include <stdio.h>
int main(){
    float gastos, gorjeta;
    printf("Informe o total de gastos: "); scanf("%f",&gastos);
    gorjeta = (gastos*10)/100;
    printf("Gorjeta: %.0f",gorjeta);
    return 0;
}
