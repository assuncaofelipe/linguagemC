#include <stdio.h>
int main(){
    float sal, perc, nSal;
    printf("Informe o salário: ");
    scanf("%f",&sal);
    printf("Informe o percentual de aumento: ");
    scanf("%f",&perc);
    perc = (sal*perc)/100;
    printf("Aumento: %f\n",perc);
    nSal = sal+perc;
    printf("Novo salário: %f\n",nSal);
    return 0;
}
