#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>

#define ERRO 0
#define OK 1

typedef struct TipoDadoLDE{
    long int cpf;
    int dv;
    int dia, mes, ano;
    char nome[50];
}TipoDadoLDE;

typedef struct ElemLDE{
    TipoDadoLDE Dado;
    struct ElemLDE* prox;
    struct ElemLDE* ant;
}ElemLDE;

typedef struct ElemLDE* Lista;

Lista *cria_lista();
int insere_lista_inicio(Lista *li, TipoDadoLDE Dado);
ElemLDE *busca_no(Lista *li, long int CPF);
int exibe_nodo(ElemLDE *no);
int conta_elem(Lista *li);
int grava_dados_lista(Lista *li);
void libera_lista(Lista *li);
#endif