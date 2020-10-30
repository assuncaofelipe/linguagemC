#import <stdio.h>
#import <stdlib.h>

#define celsius 0
#define latitude 1
#define TIP 2
#define C 50
#define LAT 90

void Leitura(int V[][TIP]){
	
	int x=0,c;
	
	while(x<=LAT*2){
		V[x][latitude]=x-LAT;
		V[x][celsius]=C-rand()%(C*2+1);
		x++;
	}
}

void Imprime(int V[][TIP], int y){
	
	int x=0;
	
	while(x<=LAT*2){
		if(V[x][y]>C || V[x][y]<-C)	
			printf("Latitude %d: sem dados\n",V[x][latitude]);
		else
			printf("Latitude %d: %dc\n",V[x][latitude],V[x][y]);
		x++;
	}
}

void Menor(int V[][TIP]){
	
	int m=C,mi,x=0;
	
	while(x<=LAT*2){
		if(V[x][celsius]<m){
			m=V[x][celsius];
			mi=x-LAT;
		}
		x++;
	}
	printf("\nA menor tempereatura foi %d em %d\n",m,mi);
}

void Media(int V[][TIP]){
	
	int x=-LAT,mNorte=0,mSul=0;
	
	while(x<LAT){
		
		if(x<0) 	mNorte=mNorte+V[x][celsius];
		else if(x>0)	mSul=mSul+V[x][celsius];	
		x++;
	}
	printf("Media norte:	%d\nMedia sul:	%d", mNorte, mSul);
}

void Farenheit(int V[][TIP]){
	
	int x=0;
	int F[LAT*2+1][TIP+1];
	
	while(x<=LAT*2){
		F[x][0]=V[x][0];
		F[x][1]=V[x][1];
		F[x][2]=(V[x][1]*9)/5+32;
		x++;
	}
}

int main(){
	
	int lat=1+LAT*2;
	
	int T[lat][TIP];
	
	Leitura(T);
	Imprime(T, celsius);
	Menor(T);
	Media(T);
}
