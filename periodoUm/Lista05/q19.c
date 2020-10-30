#include <stdio.h>
int main(){
    int eleitores =1, jf=0, mf=0, c=0,voto=0,bn=0;
    while (eleitores<=1000){
        printf("10 – José da feira / 20 – Maria Fumaça / 30 – Chico: "); scanf("%d",&voto);
        if (voto==10){
            jf++;
        } else if (voto==20){
            mf++;
        } else if (voto ==30){
            c++;
        } else {
            bn++;
        }
        eleitores++;

    }
    printf("Votos do José: %d\n",jf);
    printf("Votos da Maria: %d\n",mf);
    printf("Votos do Chico: %d\n",c);
    printf("Brancos e nulo: %d\n",bn);

    return 0;
}
