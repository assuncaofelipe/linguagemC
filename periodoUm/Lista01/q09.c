#include <stdio.h>
#include <math.h>
int main(){
    float x1,x2,y1,y2,dist;
    printf("X1: ");
    scanf("%f",&x1);
    printf("Y1: ");
    scanf("%f",&y1);
    printf("X2: ");
    scanf("%f",&x2);
    printf("Y2: ");
    scanf("%f",&y2);
    dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("A distância entre os pontos é: %f",dist);
    return 0;
}
