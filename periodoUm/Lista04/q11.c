#include <stdio.h>
int main(){
    float p1, p2, p3;
    printf("Valor 1: "); scanf("%f",&p1);
    printf("Valor 2: "); scanf("%f",&p2);
    printf("Valor 3: "); scanf("%f",&p3);
    if (p1<p2 && p1<p3){
        printf("Compre o produto 1");
    } else if (p2<p1 && p2<p3) {
        printf("Compre o produto 2");
    } else {
        printf("Compre o produto 3");
    }
    return 0;
}
