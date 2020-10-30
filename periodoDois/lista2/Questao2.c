#include<stdio.h>

int potencia(int base, int expoente)
{
    int i, potencia = 1;
    for(i = 0; i < expoente; i++)
        potencia = potencia * base;
    
    return potencia;
}

int main()
{
    int expoente, base, resultado;

    printf("Base: ");
    scanf("%d", &base);
    printf("Expoente: ");
    scanf("%d", &expoente);

    resultado = potencia(base, expoente);

    printf("Resultado: %d\n", resultado);
}
