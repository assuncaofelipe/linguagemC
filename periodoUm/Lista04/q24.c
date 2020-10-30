#include <stdio.h>
int main(){
    float quilo,multa;
    printf("Quilos: "); scanf("%f",&quilo);
    if (quilo>50){
        multa = (quilo-50)*4;
        printf("Multa: %.2f",multa);
    } else {
         printf("Não deverá pagar nada");
    }

    return 0;
}
