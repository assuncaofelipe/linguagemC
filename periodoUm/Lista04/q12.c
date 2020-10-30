#include <stdio.h>
int main(){
    char op[1];
    printf("M-matutino ou V-Vespertino ou N-Noturno: "); scanf("%s",op);
    if (op[0]=='M' || op[0] == 'm') {
        printf("Bom dia!");
    } else if (op[0] == 'V' || op[0] == 'v'){
        printf("Boa tarde!");
    } else if (op[0] == 'N' || op[0] == 'n'){
        printf("Boa noite!");
    } else {printf("Valor inválido!");}
    return 0;
}
