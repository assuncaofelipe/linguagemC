#include <stdio.h>
int main(){
    int tempo, vm;
    float dist, qtdlitros;
    printf("Informe o tempo gasto: ");
    scanf("%d",&tempo);
    printf("Informe a velocidade media: ");
    scanf("%d",&vm);
    dist = vm/tempo;
    qtdlitros = dist/12;
    printf("Quantidade de litros necessários: %.3f",qtdlitros);
    return 0;
}
