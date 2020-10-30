#include <stdio.h>
int main(){
    float sal, desc;
    printf("Informe o salário bruto: "); scanf("%f",&sal);
    desc = (sal*15)/100;
    printf("Salário líquido: %.2f",sal-desc);
    return 0;
}
