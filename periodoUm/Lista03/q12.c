#include <stdio.h>
int main() {
    float sal, desc;
    printf("Salário: "); scanf("%f",&sal);
    if (sal<=600) {desc = 0;}
    else if (sal>600 && sal<=1200) {desc = (sal*20)/100;}
    else if (sal>1200 && sal<=2000) {desc = (sal*25)/100;}
    else {desc = (sal*30)/100;}
    printf("Salário: %.2f",sal-desc);
    return 0;
}
