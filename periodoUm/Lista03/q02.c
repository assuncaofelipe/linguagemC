#include <stdio.h>
int main(){
    float cFab, tot;
    printf("Informe o custo de fábrica: "); scanf("%f",&cFab);
    tot+= (cFab*12)/100;
    tot+= (cFab*45)/100;
    printf("Total: %0.f",cFab+tot);

    return 0;
}
