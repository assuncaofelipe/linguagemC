#include <stdio.h>
int main(){
    int distPerc; //Km
    float tComb, cMedio; //L
    printf("Informe a distância percorrida: ");
    scanf("%d",&distPerc);
    printf("Informe o combustível gasto: ");
    scanf("%f",&tComb);
    cMedio = distPerc/tComb;
    printf("Consumo médio: %.1f",cMedio);

    return 0;
}
