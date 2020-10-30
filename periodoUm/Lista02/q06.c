#include <stdio.h>
int main(){
    float salBruto, valEmp, valParc;
    int qtdParc;
    printf("Salário bruto: "); scanf("%f",&salBruto);
    printf("Valor do Empréstimo: "); scanf("%f",&valEmp);
    printf("Parcelas: "); scanf("%d",&qtdParc);
    valParc = valEmp/qtdParc;
    valParc<=(salBruto*30)/100 ? printf("Emprestimo concedido") : printf("Empréstimo não concedido");
    return 0;
}
