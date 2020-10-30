#include <stdio.h>
int main(){
    int maca;
    float tot;
    printf("Quantidade de maçãs: "); scanf("%d",&maca);
    if (maca<12){
        tot = 1.30*maca;
    } else {
        tot = 1*maca;
    }
    printf("Total da compra: %.2f",tot);
    return 0;
}
