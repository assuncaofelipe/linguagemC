#include <stdio.h>
#include <math.h>
int main(){
    float peso, imc, altura;
    printf("Peso: "); scanf("%f",&peso);
    printf("Altura: "); scanf("%f",&altura);
    imc = peso/(altura*altura);
    printf("IMC: %.2f\n",imc);
    if (imc<18.5){printf("Abaixo do peso");}
    else if (imc>=18.5 && imc<25){printf("Peso normal");}
    else if (imc>=25 && imc<=30){printf("Acima do peso");}
    else {printf("Obeso");}
    return 0;
}
