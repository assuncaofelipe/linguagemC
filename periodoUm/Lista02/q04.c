#include <stdio.h>
int main(){
    float a,b,c, media;
    printf("Nota 1: "); scanf("%f",&a);
    printf("Nota 2: "); scanf("%f",&b);
    printf("NOta 3: "); scanf("%f",&c);
    media = (a*2 + b*4 + c*4) /10;
    printf("Media final: %f",media);
    if (media<8 && media>=2.5){printf("Deverá fazer PF");}
    else if (media>=8){printf("Aprovado");}
    else {printf("Reprovado");}
    return 0;
}
