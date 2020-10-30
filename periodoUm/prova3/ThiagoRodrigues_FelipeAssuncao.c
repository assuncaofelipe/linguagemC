#include <stdio.h>
#include <stdlib.h>
#define N 10

int tam=0; // tamanho iniciam da lista

void inserir(int lista[]); //declaração da função inserir elemento
void imprimir(int lista[]); //declaração da dunção de inserir elemento
void remover(int lista[]); //declaração da função de remover elemento
int busca_binaria(int lista[], int t, int c); //decltração da função de busca binaria


// ------------------------------------------------------------------------------------//

int main(){

	int i, op, lista[N]; //declaração de variaveis

	int condicao=1; // condição iniciada em 1 para validar o loop

	while(condicao){ //inicio loop do menu
		printf("\n\t MENU LISTA \n");
		printf("1 - Inserir elemento na lista\n");
		printf("2 - Imprimir lista\n");
		printf("3 - Remover elemento\n");
		printf("0 - Sair\n");

		printf("Insira sua opcao: ");
		scanf("%d", &op);

		switch(op){ //inicio switch
			case 1: // inserir elemento
			    system("cls");
				inserir(lista);
				break;
			case 2: // imprime lista
			    system("cls");
				imprimir(lista);
				break;
			case 3: //remove o ultimo elemento
			    system("cls");
				remover(lista);
				break;
			case 0: //fecha o sistema
			    system("cls");
				condicao=0;
				printf ("Sistema fechado!\n\n");
				 break;
                default:
                printf ("OPCAO INVALIDA!\n");
                break;
		} // fim switch
	} // fim loop menu
}

/// ----------------------------------------------------------/// 

void inserir(int lista[]){ // função inserir.
	int i=0, aux;
	if ( tam==0){
		printf ("Insira elemento: ");
		scanf ("%d", &lista[i]);
		tam++;
	}else if (tam>0 && tam<N){
		i=tam;
		printf ("Insira elemento: ");
		scanf ("%d", &lista[i]);
		tam++;
		
		while (i>0){
			if (lista[i]<lista[i-1]){ 
				aux=lista[i-1]; 
				lista[i-1]=lista[i];
				lista[i]=aux;
				i--;
			}else break;
		}

	}else{
		printf ("Lista completa!\n");
		return;
	}
}

/// ----------------------------------------------------------------------///

void imprimir(int lista[]){ // função imprimir.
	int i;

	if (tam==0){
		printf ("Lista vazia\n\n");
	}else{
		printf ("Lista:\n");

		for (i=0;i<tam;i++)
			printf ("%4d",lista[i]);
		printf ("\n");
	}
}

 // ------------------------------------------------------------------------//
 
 
// remove apenas o ultimo elemento da lista, cada vez que chamada a função.
void remover(int lista[]){ // função remover
    int x, y;
	if (tam==0){
		printf("Lista vazia!\n");
	}else{
	    printf("Insira o valor que deseja excluir: ");
	    scanf("%d", &x);
	    y = busca_binaria(lista, tam, x);
	    if(y >= 0){
            printf("Valor encontrado!\n ");
           // lista[tam] = lista[tam+1];
            lista[tam] = tam--;
            printf ("Elemnto removido!\n");
            imprimir(lista);
	    }else{
	    printf("Valor não encontrado!");
	    }
	}
}

// ------------------------------------------------------------------//

int busca_binaria(int lista[], int t, int c){ // função busca binario.
int inicio = 0, fim = t -1, meio;
    while(inicio <= fim){
    meio = (inicio + fim)/2;
        if(lista[meio] == c){
        return meio;
        }
		else{
        	if(lista[meio] > c)
        		fim = meio -1;
        else{
	        inicio = meio - 1;
        	}
    	}
    }
return -1;
}

