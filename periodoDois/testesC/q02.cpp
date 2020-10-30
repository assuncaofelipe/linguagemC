#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int a = 0, b, c, d, n = 100;
	
	d = n*(-1);
	printf("20 numeros primos: \n");
	do{
		a++;
		c = 0;
		for (b = 1; b < a; b++)
			if (a % b == 0)
				c++;
			
			if (c == 1)
				printf("%d\n", a);
				d++;
		}
		while (d);
		printf("\n");	
	return 0;	
}
