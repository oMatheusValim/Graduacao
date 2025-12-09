#ifndef ARVOREAVL_H
#define ARVOREAVL_H

#include <stdio.h>
#include "lista.h"

typedef struct TipoDadoABO{
    long int cpf;
} TipoDadoABO;

typedef struct ElemABO{
    struct ElemLDE* link; // Link para a lista
    TipoDadoABO Dado;
    struct ElemABO* esq;
    struct ElemABO* dir;
    int altura; // balanceamento AVL
} ElemABO;

typedef struct ElemABO* Arvore;

Arvore *cria_arvore();
void libera_arvore(Arvore *raiz);

int insere_arvore_avl(Arvore *raiz, Lista *li, TipoDadoABO Dado);

// Funções de análise
int conta_altura(Arvore *raiz); // Retorna a altura da raiz
int exibe_primeiro_no(Arvore *raiz); // Menor CPF
int exibe_ultimo_no(Arvore *raiz);   // Maior CPF

// Gravação de arquivos
int grava_dados_arvore_ordem(Arvore *raiz);    // dados2.txt 
int grava_dados_arvore_pre_ordem(Arvore *raiz); // dados3.txt

#endif