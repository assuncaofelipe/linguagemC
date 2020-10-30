#include <stdio.h>
int main(){
    int cont =50;
    float c;
    while (cont<=150){
        c=(cont-32)/1.8;
        printf("%.2f\n",c);
        cont++;

    }
    return 0;
}
