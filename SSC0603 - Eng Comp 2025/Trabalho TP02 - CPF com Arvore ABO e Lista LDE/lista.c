#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lista.h"

Lista* cria_lista(){
    Lista* li = (Lista*)calloc(1,sizeof (Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

int insere_lista_inicio(Lista *li, TipoDadoLDE Dado){
    if(li == NULL) return ERRO;

    ElemLDE *no = (ElemLDE*)calloc(1,sizeof(ElemLDE));
    if(no == NULL) return ERRO;

    no->Dado.cpf = Dado.cpf;
    no->Dado.dv = Dado.dv;
    no->Dado.dia = Dado.dia;
    no->Dado.mes = Dado.mes;
    no->Dado.ano = Dado.ano;
    strcpy (no->Dado.nome, Dado.nome);

    no->ant = NULL;

    if(*li == NULL){
        *li = no;
        no->prox = NULL;
    }else{
        no->prox = *li;
        (*li)->ant = no;
        *li = no;
    }

    return OK;
}

ElemLDE *busca_no(Lista* li, long int CPF){
    if(li == NULL) return NULL;

    ElemLDE* atual;
    atual = *li;

    while(atual != NULL && atual->Dado.cpf != CPF){
        atual = atual->prox;
    }

    if(atual == NULL) return NULL;

    return atual;
}

int exibe_nodo(ElemLDE *no){
    if(no == NULL) return ERRO;

    printf("%09ld-%02d %02d/%02d/%04d %s\n", no->Dado.cpf, no->Dado.dv, no->Dado.dia, no->Dado.mes, no->Dado.ano, no->Dado.nome);

    return OK;
}

int conta_elem(Lista *li){
    if(li == NULL) return ERRO;

    int count = 0;
    ElemLDE *no = *li;

    while(no != NULL){
        count++;
        no = no->prox;
    }

    return count;
}

int grava_dados_lista(Lista *li){
    if(li == NULL) return ERRO;

    ElemLDE *aux = *li;
    FILE *Arq = fopen("dados1.txt", "wt");

    if(Arq == NULL) return ERRO;

    while(aux != NULL){
        fprintf(Arq, "%09ld-%02d %02d/%02d/%04d %s\n", aux->Dado.cpf, aux->Dado.dv, aux->Dado.dia, aux->Dado.mes, aux->Dado.ano, aux->Dado.nome);
        aux = aux->prox;
    }

    fclose(Arq);
    return OK;
}

void libera_lista(Lista *li){
    if(li != NULL){
        ElemLDE *no_atual;
        // Percorre a lista
        while((*li) != NULL){
            // Guarda o nó atual
            no_atual = *li;
            // Avança o ponteiro da lista para o próximo nó
            *li = (*li)->prox;
            // Liberta o nó que ficou para trás
            free(no_atual);
        }
        // No final, liberta o ponteiro da lista em si
        free(li);
    }
}