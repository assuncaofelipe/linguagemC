#include <stdio.h>
int main(){
    int num,pot,m=0;
    printf("Numero: "); scanf("%d",&num);
    printf("Potência: "); scanf("%d",&pot);
    m=num;
    for (int i =1; i<pot; i++){
        m*=num;
    }
    printf("Num: %d",m);
    return 0;
}
