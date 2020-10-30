#include <stdio.h>
int main(){
    float compra, venda;
    printf("Valor da compra: "); scanf("%f",&compra);
    compra<20 ? (venda = compra + (compra*45)/100) : (venda = compra+ (compra*30)/100);
    printf("Valor da venda: %.2f",venda);
    return 0;
}
