#include <stdio.h>
int main(){
    float salbase, salrec, grat=5, imp=8;
    printf("Informe o salário: ");
    scanf("%f",&salbase);
    grat = (salbase*grat)/100;
    imp = (salbase*imp)/100;
    salrec = (salbase+grat-imp);
    printf("Salário: %f",salrec);
    return 0;
}
