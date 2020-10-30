#include <stdio.h>
int main(){
    int a,b,c;
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("c: ");
    scanf("%d",&c);
    //a,b,c   a,c,b  b,c,a  b,a,c   c,a,b   c,b,a
    if (a<b && b<c){
        printf("%d %d %d",a,b,c);
    } else if (a<c && c<b){
        printf("%d %d %d",a,c,b);
    } else if (b<c && c<a){
        printf("%d %d %d",b,c,a);
    } else if (b<a && a<c) {
        printf("%d %d %d",b,a,c);
    } else if (c<a && a<b) {
        printf("%d %d %d",c,a,b);
    } else if (c<b && b<a){
        printf("%d %d %d",c,b,a);
    }

    return 0;
}
