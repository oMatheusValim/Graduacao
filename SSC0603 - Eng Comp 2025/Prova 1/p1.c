#include <stdio.h>
#include <stdlib.h>
#include "p1.h"

Lista* cria_lista() {
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if (li != NULL) {
        *li = NULL;
    }
    return li;
}

void libera_lista(Lista* li) {
    if (li != NULL) {
        No* no_atual;
        while ((*li) != NULL) {
            no_atual = *li;
            *li = (*li)->prox;
            free(no_atual);
        }
        free(li);
    }
}

int insere_lista_final(Lista* li, TemperaturaData dt) {
    if (li == NULL) return 0;
    
    No* no_novo = (No*) malloc(sizeof(No));
    if (no_novo == NULL) return 0;

    no_novo->dados = dt;
    no_novo->prox = NULL;

    if ((*li) == NULL) { 
        no_novo->ant = NULL;
        *li = no_novo;
    } else {
        No *aux = *li;
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = no_novo;
        no_novo->ant = aux;
    }
    return 1;
}
