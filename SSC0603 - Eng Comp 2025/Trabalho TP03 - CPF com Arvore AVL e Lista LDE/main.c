#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"
#include "arvoreAVL.h"

int carrega_dados_csv(Lista *li, Arvore *raiz, char *NomeArq){
    if(li == NULL || raiz == NULL) return ERRO;

    FILE *Arq = fopen(NomeArq, "rt");
    if(Arq == NULL) return ERRO;

    char linha[256];

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
            if (dadolde.cpf == -1) break;

            if (insere_lista_inicio(li, dadolde) == OK) {
                dadoabo.cpf = dadolde.cpf;
                insere_arvore_avl(raiz, li, dadoabo);
            }
        }
    }
    fclose(Arq);
    return OK;
}

int main(){
    int modo;
    scanf("%d", &modo);

    char *NomeArq = "basedados.csv";

    Lista *li = cria_lista();
    Arvore *raiz = cria_arvore();

    if (carrega_dados_csv(li, raiz, NomeArq) == ERRO){
       printf("ERRO AO CARREGAR DADOS");
       return 1;
    }
    
    int altura_arvore = conta_altura(raiz);
    int n_elementos = conta_elem(li);

    // Outputs comuns
    printf("%d\n", n_elementos); 
    printf("%d\n", altura_arvore); 

    exibe_primeiro_no(raiz);
    exibe_ultimo_no(raiz);  

    // Gera os arquivos
    grava_dados_lista(li);      
    grava_dados_arvore_ordem(raiz); 
    grava_dados_arvore_pre_ordem(raiz);

    if(modo == 2){
        system("cat dados1.txt");
        system("cat dados2.txt");
        system("cat dados3.txt"); 
    }

    libera_lista(li);
    libera_arvore(raiz);
    
    return 0;
}