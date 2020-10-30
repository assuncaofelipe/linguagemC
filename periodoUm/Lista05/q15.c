#include <stdio.h>
int main(){
    int k,t=0;
    printf("K: "); scanf("%d",&k);
    for (int i=0;i<=100;i++){
        t+=(k+i);
    }
    printf("T: %d",t);
    return 0;
}
