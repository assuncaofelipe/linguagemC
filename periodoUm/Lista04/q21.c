#include <stdio.h>
int main(){
    float maca, morango, totMa, totMo, tot;
    printf("Quilos de maçã: "); scanf("%f",&maca);
    printf("Quilos de morango: "); scanf("%f",&morango);
    if (maca<=5){
        totMa = maca*1.8;
    } else {
        totMa = maca*1.5;
    }

    if (morango<=5){
        totMo = morango*2.5;
    } else {
        totMo = morango*2.2;
    }
    tot = totMo+totMa;
    if (maca+morango > 8 || tot>25){
        tot -= (tot*10)/100;
    }
    printf("Total: %.2f",tot);

    return 0;
}
