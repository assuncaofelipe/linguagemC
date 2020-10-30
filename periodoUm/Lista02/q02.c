#include <stdio.h>

int main(){
    int idade;
    printf("Idade: ");
    scanf("%d",&idade);
    if (idade < 16){printf("Não eleitor");}
    else if (idade >=18 && idade<=65){printf("Eleitor obrigatório");}
    else {printf("Eleitor facultativo");}
    return 0;
}
