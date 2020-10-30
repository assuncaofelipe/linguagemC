#include<stdio.h>
#define TAM 5

typedef struct{
    char marca[15];
    int ano;
    float preco;
}dado;

int main()
{
    dado carro[TAM];
    int i;
    float p = 1;

    for(i = 0; i < TAM; i++){
        printf("Marca: ");
        scanf("%[^\n]s", carro[i].marca);
        printf("Ano: ");
        scanf("%d", &carro[i].ano);
        printf("Preco: ");
        scanf("%f", &carro[i].preco);
        setbuf(stdin, NULL);
    }
    while(p != 0){
        printf("Limite: ");
        scanf("%f", &p);
        for(i = 0; i < TAM; i++){
            if(carro[i].preco <= p){
                printf("Marca: %s\nAno: %d\nPreco: %0.2f\n\n", carro[i].marca, carro[i].ano, carro[i].preco);
            }
        }
    }
    return 0;
}