#include <stdlib.h>
#include <stdio.h>
#include <string.h> 
#include "arvore.h"

int altura_no(ElemABO* no){
    if(no == NULL) return -1;
    return no->altura;
}

int fator_balanceamento(ElemABO* no){
    if(no == NULL) return 0;
    return altura_no(no->esq) - altura_no(no->dir);
}

int maior(int x, int y){
    return (x > y) ? x : y;
}

void atualiza_altura(ElemABO* no) {
    if (no != NULL) {
        no->altura = maior(altura_no(no->esq), altura_no(no->dir)) + 1;
    }
}

void RotacaoLL(Arvore *raiz){
    ElemABO *no = (*raiz)->esq;
    (*raiz)->esq = no->dir;
    no->dir = *raiz;
    atualiza_altura(*raiz);
    atualiza_altura(no);
    *raiz = no;
}

void RotacaoRR(Arvore *raiz){
    ElemABO *no = (*raiz)->dir;
    (*raiz)->dir = no->esq;
    no->esq = *raiz;
    atualiza_altura(*raiz);
    atualiza_altura(no);
    *raiz = no;
}

void RotacaoLR(Arvore *raiz){
    RotacaoRR(&(*raiz)->esq);
    RotacaoLL(raiz);
}

void RotacaoRL(Arvore *raiz){
    RotacaoLL(&(*raiz)->dir);
    RotacaoRR(raiz);
}

Arvore *cria_arvore(){
    Arvore *raiz = (Arvore*)malloc(sizeof(Arvore));
    if(raiz != NULL) *raiz = NULL;
    return raiz;
}

void libera_no_recursivo(ElemABO *no) {
    if (no == NULL) return;
    libera_no_recursivo(no->esq);
    libera_no_recursivo(no->dir);
    free(no);
}

void libera_arvore(Arvore *raiz){
    if(raiz == NULL) return;
    libera_no_recursivo(*raiz);
    free(raiz);
}

int insere_arvore_avl_recursivo(Arvore *raiz, TipoDado Dado){
    if(*raiz == NULL){
        ElemABO *novo = (ElemABO*)malloc(sizeof(ElemABO));
        if(novo == NULL) return 0;
        novo->Dado = Dado;
        novo->altura = 0;
        novo->esq = NULL;
        novo->dir = NULL;
        *raiz = novo;
        return 1;
    }

    ElemABO *atual = *raiz;
    int cmp = strcmp(Dado.palavra, atual->Dado.palavra);

    if(cmp < 0){ // Palavra nova é "menor" (vem antes no alfabeto)
        if(insere_arvore_avl_recursivo(&(atual->esq), Dado)){
            if(fator_balanceamento(atual) >= 2){
                if(strcmp(Dado.palavra, (*raiz)->esq->Dado.palavra) < 0)
                    RotacaoLL(raiz);
                else
                    RotacaoLR(raiz);
            }
        }
    } else if(cmp > 0) { // Palavra nova é "maior"
        if(insere_arvore_avl_recursivo(&(atual->dir), Dado)){
            if(fator_balanceamento(atual) <= -2){
                if(strcmp(Dado.palavra, (*raiz)->dir->Dado.palavra) > 0)
                    RotacaoRR(raiz);
                else
                    RotacaoRL(raiz);
            }
        }
    }
    // Se cmp == 0, palavra duplicada, não insere.

    atualiza_altura(*raiz);
    return 1;
}

int insere_arvore_avl(Arvore *raiz, TipoDado Dado){
    return insere_arvore_avl_recursivo(raiz, Dado);
}

void exibe_arvore_ordenada(Arvore *raiz){
    if (raiz == NULL || *raiz == NULL) return;
    exibe_arvore_ordenada(&((*raiz)->esq));
    printf("%s\n", (*raiz)->Dado.palavra);
    exibe_arvore_ordenada(&((*raiz)->dir));
}

void busca_prefixo(Arvore *raiz, char* prefixo, int n, int modo, Arvore *arvore_temp) {
    if (raiz == NULL || *raiz == NULL) return;

    ElemABO *no = *raiz;
    
    // Compara apenas os 'n' primeiros caracteres 
    int cmp = strncmp(no->Dado.palavra, prefixo, n);

    if (cmp == 0) {
        // 1. Processa o nó atual
        if (modo == 0) {
            printf("%s\n", no->Dado.palavra); // Modo 0: Imprime direto
        } else if (modo == 1) {
            insere_arvore_avl(arvore_temp, no->Dado); // Modo 1: Guarda na nova árvore 
        }

        // 2. Como é prefixo, podem haver palavras na Esquerda E na Direita
        if (modo == 0) {
            // Modo 0: direita primeiro, depois esquerda (ordem inversa)
            busca_prefixo(&(no->dir), prefixo, n, modo, arvore_temp);
            busca_prefixo(&(no->esq), prefixo, n, modo, arvore_temp);
        } else {
            // Modo 1: esquerda primeiro, depois direita (ordem alfabética)
            busca_prefixo(&(no->esq), prefixo, n, modo, arvore_temp);
            busca_prefixo(&(no->dir), prefixo, n, modo, arvore_temp);
        }
    } 
    else if (cmp > 0) {
        busca_prefixo(&(no->esq), prefixo, n, modo, arvore_temp);
    } 
    else { 
        busca_prefixo(&(no->dir), prefixo, n, modo, arvore_temp);
    }
}