#include <stdio.h>
int main(){
    float c=1.5, z=1.1;
    int cont;
    while (z<c){
        c+=0.02;
        z+=0.03;
        cont++;
    }
    printf("%.2f\n%.2f\n",c,z);
    printf("Levará %.0d anos",cont);
    return 0;
}
