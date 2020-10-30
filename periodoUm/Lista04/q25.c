#include <stdio.h>
int main(){
    float indice;
    printf("Indice: "); scanf("%f",&indice);
    if (indice>=0.3 && indice<0.4){
        printf("1° grupo de empresas devem sespender suas atividades");
    } else if (indice>=0.4 && indice<0.5){
        printf("1° e 2° grupo devem suspender suas atividades");
    } else if (indice>=0.5){
        printf("Todos os grupos devem suspender suas atividades");
    } else {
        printf("Índice aceitável");
    }
    return 0;
}
