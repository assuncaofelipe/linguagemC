#include <stdio.h>
int main(){
    int sexo, altura;
    printf("Sexo (1-M,2-F): "); scanf("%d",&sexo);
    printf("Altura: "); scanf("%d",&altura);
    sexo == 1 ? printf("Peso ideal: %.2f",(72.7*altura)-58) : printf("Peso ideal: %.2f",(62.1*altura)-44.7);
    return 0;
}
