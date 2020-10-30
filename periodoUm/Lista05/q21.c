#include <stdio.h>
int main(){
    int num;
    printf("Num: "); scanf("%d",&num);
    while (num>0){
        int k=1,j=0;
        while (j<num)
        {
            int cont=0;
            for (int i=1; i<=k;i++){
                if (k%i==0){
                    cont++;
                }
            }
            if (cont==2){
                num-=k;
                j++;
            }
            k++;
        }


    }
    printf("%d",num);
    return 0;
}
