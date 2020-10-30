#include <stdio.h>
int main(){
    char nome[50];
    int dias;
    float total;
    printf("Nome: "); scanf("%s",nome);
    printf("Total de dias: "); scanf("%d",&dias);
    if (dias < 15){
        total = dias*68;
    } else if (dias == 15){
        total = dias*66;
    } else {
        total = dias*65.5;
    }
    printf("Nome: %s\nTotal: %.2f",nome,total);
    return 0;
}
