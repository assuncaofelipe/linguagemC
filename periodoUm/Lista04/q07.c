#include <stdio.h>
int main(){
    int n1,n2,n3,n4,n5;
    printf("Valor1: "); scanf("%d",&n1);
    printf("Valor2: "); scanf("%d",&n2);
    printf("Valor3: "); scanf("%d",&n3);
    printf("Valor4: "); scanf("%d",&n4);
    printf("Valor5: "); scanf("%d",&n5);
    if (n1!=n2 && n1!=n3 && n1!=n4 && n1!=n5 && n2!=n3 && n2!=n4 && n2!=n5 && n3!=n4 && n3!=n5 && n4!=n5) {
        if (n1>n2 && n1>n3 && n1>n4 && n1>n5) {printf("Maior: %d\n",n1);}
        if (n2>n1 && n2>n3 && n2>n4 && n2>n5) {printf("Maior: %d\n",n2);}
        if (n3>n1 && n3>n2 && n3>n4 && n3>n5) {printf("Maior: %d\n",n3);}
        if (n4>n1 && n4>n2 && n4>n3 && n4>n5) {printf("Maior: %d\n",n4);}
        if (n5>n1 && n5>n2 && n5>n3 && n5>n4) {printf("Maior: %d\n",n5);}

        if (n1<n2 && n1<n3 && n1<n4 && n1<n5) {printf("Menor: %d\n",n1);}
        if (n2<n1 && n2<n3 && n2<n4 && n2<n5) {printf("Menor: %d\n",n2);}
        if (n3<n1 && n3<n2 && n3<n4 && n3<n5) {printf("Menor: %d\n",n3);}
        if (n4<n1 && n4<n2 && n4<n3 && n4<n5) {printf("Menor: %d\n",n4);}
        if (n5<n1 && n5<n2 && n5<n3 && n5<n4) {printf("Menor: %d\n",n5);}


    }
    return 0;
}
