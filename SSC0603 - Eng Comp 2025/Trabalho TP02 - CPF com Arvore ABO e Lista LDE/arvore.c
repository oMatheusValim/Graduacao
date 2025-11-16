#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "arvore.h"

Arvore *cria_arvore(){
    Arvore *raiz = (Arvore*)calloc(1,sizeof(Arvore));
    if (raiz != NULL){
        *raiz = NULL;
    }

    return raiz;
}

int insere_arvore_ordenado(Arvore *raiz, Lista *li, TipoDadoABO Dado){
    if(raiz == NULL) return ERRO;

    ElemABO *no = (ElemABO*)calloc(1,sizeof(ElemABO));
    if (no == NULL) return ERRO; // Verifica logo após alocar

    no->esq = NULL;
    no->dir = NULL;
    
    no->Dado.cpf = Dado.cpf;
    no->link = busca_no(li, Dado.cpf);

    if(*raiz == NULL){
        *raiz = no;
        return OK;
    }
    
    ElemABO* atual = *raiz;
    ElemABO* pai = NULL;

    while(atual != NULL){
        pai = atual;

        if(no->Dado.cpf == atual->Dado.cpf){
            free(no);
            return ERRO; // CPF duplicado
        }
        else if(no->Dado.cpf < atual->Dado.cpf){
            atual = atual->esq;
        }
        else if(no->Dado.cpf > atual->Dado.cpf){
            atual = atual->dir;
        }
    }

    if(no->Dado.cpf < pai->Dado.cpf){
        pai->esq = no;
    }
    else{
        pai->dir = no;
    }

    return OK;
}

int calcula_h(ElemABO *no){
    if(no == NULL) return 0;

    int altura_esq, altura_dir;
    altura_esq = calcula_h(no->esq);
    altura_dir = calcula_h(no->dir);
    if(altura_dir < altura_esq){
        return 1 + altura_esq;
    }else{
        return 1 + altura_dir;
    }
}

int conta_altura(Arvore *raiz){
    if(raiz == NULL) return ERRO;

    int h = calcula_h(*raiz);
    return h;
}

int exibe_ultimo_no(Arvore *raiz){
    if (raiz == NULL) return ERRO;

    ElemABO *aux = *raiz;
    if (aux == NULL) return ERRO;

    while(aux->dir != NULL){
        aux = aux->dir;
    }
    exibe_nodo(aux->link);

    return OK;
}

int exibe_primeiro_no(Arvore *raiz){
    if (raiz == NULL) return ERRO;

    ElemABO *aux = *raiz;
    if (aux == NULL) return ERRO;

    while(aux->esq != NULL){
        aux = aux->esq;
    }
    exibe_nodo(aux->link);

    return OK;
}

void grava_ordem_recursivo(ElemABO *no, FILE *Arq){
    if (no == NULL) return;

    grava_ordem_recursivo(no->esq, Arq);

    if(no->link != NULL){
        fprintf(Arq, "%09ld\n", no->Dado.cpf);
    }

    grava_ordem_recursivo(no->dir, Arq);
}

int grava_dados_arvore(Arvore *raiz){
    if (raiz == NULL || *raiz == NULL) return ERRO;

    FILE *Arq = fopen("dados2.txt", "wt");
    if(Arq == NULL) return ERRO;

    grava_ordem_recursivo(*raiz, Arq);

    fclose(Arq);
    return OK;
 }

/*
 * Função auxiliar (privada) que faz o trabalho recursivo.
 * Esta função deve ser adicionada ANTES da 'libera_arvore'.
 */
void _libera_no_recursivo(ElemABO *no) {
    if (no == NULL) return;
    
    // 1. Liberta o filho da esquerda
    _libera_no_recursivo(no->esq);
    // 2. Liberta o filho da direita
    _libera_no_recursivo(no->dir);
    // 3. Liberta o nó atual (pai)
    free(no);
}

void libera_arvore(Arvore *raiz){
    if(raiz != NULL){
        // Chama a função recursiva para libertar todos os nós
        _libera_no_recursivo(*raiz);
        // Liberta o ponteiro da raiz em si
        free(raiz);
    }
}