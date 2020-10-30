#include <stdio.h>
int main(){
    int num, anoNas, anoIng;
    printf("Codigo: "); scanf("%d",&num);
    printf("Ano de nascimento: "); scanf("%d",&anoNas);
    printf("Ano de Ingresso: "); scanf("%d",&anoIng);
    printf("Idade: %d\n",2019-anoNas);
    printf("Tempo de trabalho: %d\n",2019-anoIng);
    if (2019-anoNas >= 65){
        printf("Requerer aposentadoria");
    }else if (2019-anoIng >= 30){
        printf("Requerer aposentadoria");
    } else if (2019-anoNas>=60 && 2019-anoIng>=25){
        printf("Requerer aposentadoria");
    }else {
        printf("Não requerer aposentadoria");
    }
    return 0;
}
