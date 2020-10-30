#include <stdio.h>

int main(){
    float vol, raio, altura, PI=3.14;
    printf("Informe o raio: ");
    scanf("%f",&raio);
    printf("Informe a altura: ");
    scanf("%f",&altura);
    vol = PI*(raio*raio)*altura;
    printf("Volume: %f",vol);
    return 0;
}
