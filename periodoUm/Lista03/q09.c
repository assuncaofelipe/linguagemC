#include <stdio.h>
int main(){
    float a,b,c;
    printf("Lado1: "); scanf("%f",&a);
    printf("Lado2: "); scanf("%f",&b);
    printf("Lado3: "); scanf("%f",&c);
    if (a < b+c && b < a+c && c < a+b ) {
        if (a==b && b==c) {printf("Triângulo Equilátero");}
        else if (a==b || b==c || a==c) {printf("Triângulo Isóceles");}
        else {printf("Triângulo Escaleno");}
    } else {printf("Não é um triângulo!");}
    return 0;
}
