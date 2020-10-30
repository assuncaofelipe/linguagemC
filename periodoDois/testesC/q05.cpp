#include <stdio.h>
#define MAX 100

int main(){
    int i, j, a, c, b[MAX], v[MAX];
    
    for (i = 0; i < MAX; i++) {
        v[i] = 1 + rand() %100;
        printf("valores: %d\n", v[i]);
    }
    j = 0;
    for (i = 0; i < MAX; i++) {
        c = 0;
        for (a = 1; a <= v[i]; a++) {
            if (v[i] % a == 0) 
                c++; 
        }
        
        if (c == 2) {
            b[j] = v[i];
            j++;
        }
    }
    for (i = 0; i < j; i++)
        printf("\n numero primo:%d", b[i]);
    return 0;
}
