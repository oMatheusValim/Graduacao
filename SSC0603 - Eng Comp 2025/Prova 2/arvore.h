#ifndef ARVORE_H
#define ARVORE_H

#include "lista.h" 

typedef struct ElemABO{
    TipoDado Dado;
    struct ElemABO* esq;
    struct ElemABO* dir;
    int altura;
} ElemABO;

typedef struct ElemABO* Arvore;

Arvore *cria_arvore();
void libera_arvore(Arvore *raiz);

int insere_arvore_avl(Arvore *raiz, TipoDado Dado);

void exibe_arvore_ordenada(Arvore *raiz);

void busca_prefixo(Arvore *raiz, char* prefixo, int n, int modo, Arvore *arvore_temp);

#endif