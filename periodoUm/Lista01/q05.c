#include <stdio.h>

int main(){
    float salL, hAula, nAulas, percDesc;
    printf("Informe o valor da hora: ");
    scanf("%f",&hAula);
    printf("Informe o número de aulas: ");
    scanf("%f",&nAulas);
    printf("Informe o percentual de desconto: ");
    scanf("%f",&percDesc);
    salL = (nAulas*hAula);
    salL = salL - (percDesc*salL)/100;
    printf("Salário líquido: %f",salL);
    return 0;
}
