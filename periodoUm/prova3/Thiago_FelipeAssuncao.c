#include<stdio.h>
#include<stdlib.h>
#define N 100

int tam;

int vazia(); // declara��o da fun�ao vazia 
int cheia(); // declara��o da fun��o cheia
void imprimirLista(int lista[]); //  declara��o da fun��o imprimir lista
void inserir(int lista[], int valor); // declara��o da fun��o inserir elemento na lista
void remover(int lista[],int valor); // declara��o da fin��o de remover elemento da lista
int buscaBinaria(int lista[], int valor); //  declara��o da fun��o busca binaria, para localizar o elemento a ser removido

int main(){ // inicio fun��o principal
	int lista[N], op=1, valor; // declara��o de variaveis
	tam=0;

	while(op!=0){ // inicio do loop com wilhe
	// sempre printa o tamanho da lista, ap�s cada fun��o realizada
		printf ("\nTAMANHO DA LISTA: %d\n\n", tam);
	// menu de op��es
		printf("\tMENU LISTA");
		printf ("\n\n1- INSERIR ELEMENTO\n")	;
		printf ("2- REMOVER ELEMENTO\n")	;
		printf ("3- IMPRIMIR LISTA\n")	;
		printf ("0- SAIR\n")	;
		printf ("INSIRA SUA ESCOLHA: ");
		scanf ("%d", &op); // op��o solicitada

		switch(op){ // inicio do switch 
			case 1: // caso 1: inserir elemento
				system ("cls"); // limpa tela
				printf ("\n\nINSERIR ELEMENTO\n\n");
				if (cheia()) // chamada da fun��o cheia para compara��o
					printf("\nLISTA CHEIA!\nNAO FOI DESSA VEZ!\nFAVOR, EXCLUIR ELEMENTOS DA LISTA\n\n\n");
				else{
					printf("DIGITE O ELEMENTO: ");
					scanf ("%d", &valor);
					inserir(lista, valor); // chamada da fun��o inserir
				}
				break;
				
			case 2: //  caso 2: remover elemento
				system ("cls"); // limpa tela
				printf ("\n\nREMOVER ELEMENTO\n")	;
				if (vazia()) // chamada da fun��o cheia para compara��o
					printf("\nLISTA VAZIA!\nNAO FOI DESSA VEZ!\nFAVOR, INSERIR ELEMENTOS NA LISTA\n\n");
				else{
					imprimirLista(lista); // chamada da fun��o imprimir
					printf("DIGITE O ELEMENTO: ");
					scanf ("%d", &valor);
					remover(lista, valor); //  chamada da fun��o remover
				}
				break;
				
			case 3: //  caso 3: imprimir elementos
				system("cls"); // limpa tela
				printf ("\n\nIMPRIMIR LISTA\n")	;
				imprimirLista(lista); // chmada da fun�a� imprimir
				break;
				
			case 0: // caso 0: fechar sistema
				printf ("\n\n\nVOCE ESCOLHEU SAIR!\n\n\n");
				break;
			default:
				printf ("\n\n\nOPCAO INVALIDA!\n\n\n"); // caso a op��o nao estaja no menu(switch)
				break;
		}
	}

	return 0;
}

int vazia(){ // inicio fun��o vazia
	if (tam==0) 
		return 1;
	else return 0;
} // fim fun��o vazia

int cheia(){ // inicio fub��o cheia
	if (tam==N-1) 
		return 1;
	else return 0;
} // fim fun��a cheia

void imprimirLista(int lista[]){ // inicio fun��o imprimir
	int i;
	if (!vazia()){
		printf ("LISTA:\n");

		for (i=0;i<tam;i++)
            printf ("[%d] %d\n",i, lista[i]);
            printf ("\n");
	}else	printf("\nLISTA VAZIA!\n\n");
} // fim fun��o imprimir

void inserir(int lista[], int valor){ // inicio fun��o inserir
	int i=tam;
	int aux;
	if (!cheia()){
		lista[i]=valor;
		tam++;
		while(i>0){
			if (lista[i]<lista[i-1]){
				aux=lista[i-1];
				lista[i-1]=lista[i];
				lista[i]=aux;
				i--;
			}else 
				break;
		}
	}
} //  fim fun��o inserir

void remover(int lista[],int valor){ // inicio fun��o remover
	int posicao=buscaBinaria(lista, valor);
	int i;
	if (posicao>= -1){
		printf ("ELEMENTO REMOVIDO!\n\n");
		if (posicao==tam - 1)
            tam--;
		else {
			for (i=posicao;i<tam;i++)
				lista[i]=lista[i+1];
			tam--;
		}
	}else printf("ELEMENTO NAO ENCONTRADO!\n\n");
} // fim fun��o remover

int buscaBinaria(int lista[], int valor){ // inicio fun��o busca binaria
	int inicio=0, fim=tam, meio;

	while (fim>=inicio){
		meio=(fim+inicio)/2;
		if (valor==lista[meio])
            return meio;
		else if (valor<meio)
            fim=meio-1;
		else
            inicio=meio+1;
	}
	return -1;
} // fim da fun��o busca binaria
