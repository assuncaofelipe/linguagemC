#include<stdio.h>
#include<math.h>

float distanciaPontos(float x1, float x2, float y1, float y2)
{
    float distanciaP, deltaX, deltaY;
    deltaX = pow(x2 - x1, 2);
    deltaY = pow(y2 - y1, 2);
    distanciaP = sqrt(deltaX + deltaY);
    return distanciaP;
}

int main()
{
    float x1, x2, y1, y2, distanciaP;
    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);

    distanciaP = distanciaPontos(x1, x2, y1, y2);

    printf("Distancia: %f\n", distanciaP);

    return 0;
}
