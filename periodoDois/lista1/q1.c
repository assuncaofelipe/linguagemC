#include<stdio.h>

#define MAX 100

int main(){
	int v[MAX], i;
	
	for(i = 0; i < MAX; i++){
		if(i%2 == 0){
			v[i] = 0;
		}
		else {
			v[i] = 1;
		}
	}

	for (i = 0; i < MAX; i++){
		printf("%d\n", v[i]);
	}
	
	return 0;
}



