#include <stdio.h>

int main(){
    float a,b;
    char sinal[1];
    printf("Valor 1: "); scanf("%f",&a);
    printf("Valor 2: "); scanf("%f",&b);
    printf("Sinal ('+' Soma, '-' Sub, '*' Multi, '/' Div): "); scanf("%s",sinal);
    if (sinal[0] == '+') {printf("%.0f + %.0f = %.0f",a,b,a+b);}
    if (sinal[0] == '-') {printf("%.0f - %.0f = %.0f",a,b,a-b);}
    if (sinal[0] == '*') {printf("%.0f * %.0f = %.0f",a,b,a*b);}
    if (sinal[0] == '/') {printf("%.0f / %.0f = %.0f",a,b,a/b);}
    return 0;
}
