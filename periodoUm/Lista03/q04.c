#include <stdio.h>
int main() {
    int op=1, escolha;
    float tot;
    printf("1 - Hambúrguer............... R$ 3,00\n");
    printf("2 - X-burguer................ R$ 2,50\n");
    printf("3 - Fritas................... R$ 2,50\n");
    printf("4 - Refrigerante............. R$ 1,00\n");
    printf("5 - Milkshake................ R$ 3,00\n");
    while (op!=6) {
        printf("Opção %d: ",op); scanf("%d",&escolha);
        if (op==1){tot+=escolha*3;}
        if (op==2){tot+=escolha*2.5;}
        if (op==3){tot+=escolha*2.5;}
        if (op==4){tot+=escolha*1;}
        if (op==5){tot+=escolha*3;}
        op+=1;
    }
    printf("Total: %.2f",tot);
    return 0;

}
