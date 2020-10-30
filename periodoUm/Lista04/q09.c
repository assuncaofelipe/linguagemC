#include <stdio.h>
int main(){
    float temp;
    printf("Informe a temperatura: "); scanf("%f",&temp);
    if (temp >= 39) {printf("Febre Alta!");} else if (temp<39 && temp>=37) {printf("Febril");} else {printf("Sem Febre!");}
    return 0;
}
