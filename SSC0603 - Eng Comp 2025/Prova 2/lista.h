#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>

#define ERRO 0
#define OK 1

typedef struct {
    char palavra[100]; // Tamanho para palavras em inglês
} TipoDado;

// Nó da Lista 
typedef struct ElemLDE{
    TipoDado Dado;
    struct ElemLDE* prox;
    struct ElemLDE* ant;
} ElemLDE;

typedef struct ElemLDE* Lista;

Lista *cria_lista();
void libera_lista(Lista *li);

#endif