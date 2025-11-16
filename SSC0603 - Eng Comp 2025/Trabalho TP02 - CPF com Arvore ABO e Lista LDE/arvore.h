#ifndef ARVORE_H
#define ARVORE_H

#include <stdio.h>
#include "lista.h" 

typedef struct TipoDadoABO{
    long int cpf;
}TipoDadoABO;

typedef struct ElemABO{
    struct ElemLDE* link; 
    TipoDadoABO Dado;
    struct ElemABO* esq;
    struct ElemABO* dir;
    struct ElemABO* pai;
}ElemABO;

typedef struct ElemABO* Arvore;

Arvore *cria_arvore();
int insere_arvore_ordenado(Arvore *raiz, Lista *li, TipoDadoABO);
int calcula_h(ElemABO *no);
int conta_altura(Arvore *raiz);
int exibe_primeiro_no(Arvore *raiz);
int exibe_ultimo_no(Arvore *raiz);
void grava_ordem_recursivo(ElemABO *no, FILE *Arq);
int grava_dados_arvore(Arvore *raiz);
void libera_arvore(Arvore *raiz);
#endif