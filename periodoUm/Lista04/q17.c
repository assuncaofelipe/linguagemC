#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    float num;
    int op;
    printf("Digite um número: "); scanf("%f",&num);
    printf("MENU\n");
    printf("101-Raiz quadrada\n");
    printf("102-A metade\n");
    printf("103-10%% do número\n");
    printf("104-O dobro\n");
    printf("Escolha a opção:"); scanf("%d",&op);
    if (op==101) {printf("%.2f",sqrt(num));}
    else if (op==102) {printf("%.2f",num/2);}
    else if (op==103) {printf("%.2f",(num*10)/100);}
    else {printf("%.2f",num*2);}

    return 0;
}
