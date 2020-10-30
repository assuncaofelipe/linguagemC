#include <stdio.h>
#include <math.h>

int main(){
    float base, altura, per, area, diag;
    printf("Informe o valor da base: ");
    scanf("%f",&base);
    printf("Informe o valor da altura: ");
    scanf("%f",&altura);
    per = 2*(base+altura);
    area = base*altura;
    diag = sqrt(pow(base,2) + pow(altura,2));
    printf("Per: %f\nArea: %f\nDiagonal: %f",per,area,diag);
    return 0;
}
