#include <stdio.h>
int main(){
    float dist, vm;
    int tempo;
    printf("Informe a distância: "); scanf("%f",&dist);
    printf("Informe o tempo: "); scanf("%d",&tempo);
    vm = dist/tempo;
    vm > 110 ? printf("Foi superior ao limite de 110(km/h)") : printf("Não foi superior ao limite de 110(km/h)");
    return 0;
}
