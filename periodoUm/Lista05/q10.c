#include <stdio.h>
int main(){
    int qtdFun;
    float sal, soma=0, maior=0, menor=999999;
    printf("Quantidade de funcionários: "); scanf("%d",&qtdFun);
    for (int i=0;i!=qtdFun;i++){
        printf("Salário: "); scanf("%f",&sal);
        soma += sal;
        if (sal>maior){maior=sal;}
        if (sal<menor){menor=sal;}

    }
    printf("Media: %.2f\n",soma/qtdFun);
    printf("Maior: %.2f\n",maior);
    printf("Menor: %.2f\n",menor);
    return 0;
}
