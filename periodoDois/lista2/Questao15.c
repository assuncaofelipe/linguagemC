#include<stdio.h>
#include<string.h>

#define TAM 5

typedef struct{
    int idade;
    float rendaMensal;
    char nome[30],
         sexo[15],
         fumante[10],
         gostaEsporte[10],
         pratiAtivFisi[10];
}dadoEntrevista;

// Inserindo os entrevistados na lista
void inserir(dadoEntrevista entrevistado[TAM], int *quantidade)
{
    if(*quantidade != TAM){
        setbuf(stdin, NULL);
        printf("Nome: ");
        scanf("%[^\n]s", entrevistado[*quantidade].nome);
        setbuf(stdin, NULL);
        printf("Sexo (feminino) (masculino) (outro): ");
        scanf("%[^\n]s", entrevistado[*quantidade].sexo);
        printf("Idade: ");
        scanf("%d", &entrevistado[*quantidade].idade);
        printf("Renda Mensal: ");
        scanf("%f", &entrevistado[*quantidade].rendaMensal);
        setbuf(stdin, NULL);
        printf("E fumante: sim/nao: ");
        scanf("%[^\n]s", entrevistado[*quantidade].fumante);
        setbuf(stdin, NULL);
        printf("Gosta de esporte: sim/nao: ");
        scanf("%[^\n]s", entrevistado[*quantidade].gostaEsporte);

        setbuf(stdin, NULL);
        printf("Pratica atividade fisica: sim/nao: ");
        scanf("%[^\n]s", entrevistado[*quantidade].pratiAtivFisi);

        *quantidade += 1;
    } else{
        printf("Sem espaco\n\n");
    }
}

// Pesquisar entrevistado pelo nome
void pesquisar(dadoEntrevista entrevistado[TAM], int quantidade)
{
    if(quantidade != 0){
        int i, cont = 0;
        char nome[30];
        setbuf(stdin, NULL);
        printf("Nome: ");
        scanf("%[^\n]s", nome);
        for(i = 0; i < TAM; i++){
            if(strcmp(nome, entrevistado[i].nome) == 0){
                printf("nome: %s\nsexo: %s\nidade: %d\nrenda: %0.2f\nfumante: %s\ngosta esporte: %s\npratica esporte: %s\n\n",
                    entrevistado[i].nome, entrevistado[i].sexo,
                    entrevistado[i].idade, entrevistado[i].rendaMensal,
                    entrevistado[i].fumante, entrevistado[i].gostaEsporte,
                    entrevistado[i].pratiAtivFisi);

                cont++;
            }
        }
        if(cont == 0){
            printf("nao encontrado\n\n");
        }
    } else{
        printf("vaziu\n\n");
    }
}

// Estatisticas
void estatisticas(dadoEntrevista entrevistado[TAM], int quantidade, int opcao)
{
    if(quantidade != 0){
        int i, quantHomen = 0, quantMulher = 0, cont = 0;
        float percenHomens, percenMulheres, percenIdade, percenFumante, rendaMedia;
        if(opcao == 1){
            // Contar o numero de homens e de mulheres
            for(i = 0; i < quantidade; i++){
                if(strcmp("masculino", entrevistado[i].sexo) == 0){
                    quantHomen++; 
                } else if(strcmp("feminino", entrevistado[i].sexo) == 0){
                    quantMulher++;
                }
            }
            percenHomens = (quantHomen * 100) / quantidade;
            percenMulheres = (quantMulher * 100) / quantidade;
            printf("Percentual Homens %f\nMulheres %f\n\n", percenHomens, percenMulheres);
        } else if(opcao == 2){
            // Percentual de faixa etaria 18 a 40 anos
            for(i = 0; i < TAM; i++){
                if((entrevistado[i].idade >= 18) && (entrevistado[i].idade <= 40)){
                    cont++;
                }
            }
            percenIdade = (cont * 100) / quantidade;
            printf("Percentual pessoa faixa etaria 18 a 40 anos: %f\n\n", percenIdade);
        } else if(opcao == 3){
            // Percentual de fumantes
                for(i = 0; i < TAM; i++){
                    if(strcmp("sim", entrevistado[i].fumante) == 0){
                        cont++;
                    }
                }
                percenFumante = (cont * 100) / quantidade;
                printf("Percentual fumantes: %f\n\n", percenFumante);
        } else if(opcao == 4){
            // Renda Media
                for(i = 0; i < TAM; i++){
                    cont += entrevistado[i].rendaMensal;
                }
                rendaMedia = cont / quantidade;
                printf("Renda media: %f\n\n", rendaMedia);
        } else{
            printf("opcao invalida\n\n");
        }
    } else{
        system("clear");
        printf("vazio\n\n");
    }
}


int main()
{
    dadoEntrevista entrevistado[TAM];
    int i = 1, opcao, quant = 0;

    while(i != 0){
        printf("1-Inserir Entrevistado\n2-Pesquisar Entrevistado\n3-Estatisticas\n0-Sair\nOpcao: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                inserir(entrevistado, &quant);
                break;
            case 2:
                pesquisar(entrevistado, quant);
                break;
            case 3:
                printf("1-Homens e Mulheres\n2-Faixa Etaria (18 a 40 anos)\n3-Fumantes\n4-Renda Media\nOpcao: ");
                scanf("%d", &opcao);
                switch(opcao){
                    case 1:
                        estatisticas(entrevistado, quant, 1);
                        break;
                    case 2:
                        estatisticas(entrevistado, quant, 2);
                        break;
                    case 3:
                        estatisticas(entrevistado, quant, 3);
                        break;
                    case 4:
                        estatisticas(entrevistado, quant, 4);
                        break;
                    default:
                        printf("opcao invalida\n\n");
                        break;
                }
                break;
            case 0:
                i = 0;
                break;
            default:
                printf("opcao invalida\n\n");
                break;
        }
    }
    return 0;
}
