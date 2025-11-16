#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "lista.h"  
#include "arvore.h" 

int carrega_dados_csv(Lista *li, Arvore *raiz, char *NomeArq){
    if(li == NULL || raiz == NULL) return ERRO;

    FILE *Arq = fopen(NomeArq, "rt");
    if(Arq == NULL) return ERRO;

    char linha[256];
    //int total_inseridos = 0;

    while(fgets(linha, sizeof(linha), Arq)!= NULL){
        TipoDadoLDE dadolde;
        TipoDadoABO dadoabo;

       int num_lidos = sscanf(linha, "%ld,%d,%d,%d,%d,%50[^,\n]",
                               &dadolde.cpf,
                               &dadolde.dv,
                               &dadolde.dia,
                               &dadolde.mes,
                               &dadolde.ano,
                               dadolde.nome);

        if(num_lidos == 6){
            if (dadolde.cpf == -1) {
                break; 
            }

            // 1. Insere na lista
            if (insere_lista_inicio(li, dadolde) == OK) {
                // 2. Insere na árvore
                dadoabo.cpf = dadolde.cpf;
                insere_arvore_ordenado(raiz, li, dadoabo);
            }
        }
    }

    fclose(Arq);
    return OK;
}


int main()
{
    int modo;
    scanf("%d", &modo);

    char *NomeArq = "basedados.csv"; 

    Lista *li;
    li = cria_lista();

    Arvore *raiz;
    raiz = cria_arvore();

    if (carrega_dados_csv(li, raiz, NomeArq) == ERRO){
       printf("ERRO AO CARREGAR DADOS");
       return 1; 
    }
    
    int altura_arvore = conta_altura(raiz);
    int n_elementos = conta_elem(li);

    if(modo == 1){
        printf("%d\n", n_elementos);
        printf("%d\n", altura_arvore);

        exibe_primeiro_no(raiz);
        exibe_ultimo_no(raiz);

        grava_dados_lista(li);
        grava_dados_arvore(raiz);
    }
    else if(modo == 2){

        printf("%d\n", n_elementos);
        printf("%d\n", altura_arvore);

        exibe_primeiro_no(raiz); 
        exibe_ultimo_no(raiz);

        grava_dados_lista(li);
        grava_dados_arvore(raiz);

        system("cat dados1.txt");
        system("cat dados2.txt");
    }
    else {
        return 1; 
    }

    libera_lista(li);
    libera_arvore(raiz);
    
    return 0;
}