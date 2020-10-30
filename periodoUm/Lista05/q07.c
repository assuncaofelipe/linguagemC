#include <stdio.h>
int main(){
    int cod;
    float preco=0, maior=0, media=0,soma=0;
    for (int i=0; i!=15; i++){
        printf("Cod: "); scanf("%d",&cod);
        printf("Preco: "); scanf("%f",&preco);
        if (preco>maior){
            maior=preco;
        }
        soma +=preco;

    }
    media=soma/15;
    printf("Maior: %.2f\n",maior);
    printf("Media: %.2f",media);
    return 0;
}
