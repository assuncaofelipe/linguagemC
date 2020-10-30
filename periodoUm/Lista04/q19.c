#include <stdio.h>
int main(){
    float qtd, total,desc;
    char op[1];
    printf("A-Álcool\n");
    printf("G-Gasolina\n");
    printf("Escolha a opção: "); scanf("%s",op);
    printf("Quantidade: "); scanf("%f",&qtd);
    if (op[0]=='A' || op[0]=='a' && qtd<=20){
        total = qtd*3.30;
        desc = (total*3)/100;
        total -= desc;
        printf("%.2f",total);
    } else if (op[0]=='A' || op[0]=='a' && qtd>20){
        total = qtd*3.30;
        desc = (total*5)/100;
        total -= desc;
        printf("%.2f",total);
    }else if (op[0]=='G' || op[0]=='g' && qtd<=20){
        total = qtd*2.9;
        desc = (total*4)/100;
        total -= desc;
        printf("%.2f",total);
    } else {
        total = qtd*2.9;
        desc = (total*6)/100;
        total -= desc;
        printf("%.2f",total);
    }
    return 0;
}
