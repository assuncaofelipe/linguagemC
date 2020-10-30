#include <stdio.h>
int main(){
    float velocidade, conv;
    printf("Informe a velocidade em km/h: "); scanf("%f",&velocidade);
    conv = velocidade/3.6;
    printf("Velocidade em m/s: %f",conv);
    return 0;
}
