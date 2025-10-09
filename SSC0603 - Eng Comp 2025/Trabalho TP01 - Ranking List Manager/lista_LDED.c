#include <stdio.h>
#include <stdlib.h>
#include "lista_LDED.h"

Lista* cria_lista() {
    Lista *li = (Lista*) malloc(sizeof(Lista));
    if (li != NULL) {
        li->inicio = NULL;
        li->cursor = NULL;
    }
    return li;
}

void libera_lista(Lista *li) {
    if (li != NULL) {
        No* no_atual;
        while (li->inicio != NULL) {
            no_atual = li->inicio;
            li->inicio = li->inicio->prox;
            free(no_atual);
        }
        free(li);
    }
}

int insere_lista_inicio(Lista *li, RankingData dt) {
    if (li == NULL) return 0;
    No* no_novo = (No*) malloc(sizeof(No));
    if (no_novo == NULL) return 0;

    no_novo->dados = dt;
    no_novo->prox = li->inicio;
    no_novo->ant = NULL;

    if (li->inicio != NULL) {
        li->inicio->ant = no_novo;
    }
    li->inicio = no_novo;
    li->cursor = no_novo;
    return 1;
}

int insere_lista_final(Lista *li, RankingData dt) {
    if (li == NULL) return 0;
    No* no_novo = (No*) malloc(sizeof(No));
    if (no_novo == NULL) return 0;
    no_novo->dados = dt;
    no_novo->prox = NULL;

    if (li->inicio == NULL) { 
        no_novo->ant = NULL;
        li->inicio = no_novo;
    } else {
        No *aux = li->inicio;
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = no_novo;
        no_novo->ant = aux;
    }
    li->cursor = no_novo; 
    return 1;
}

int insere_lista_antes_cursor(Lista *li, RankingData dt) {
    if (li == NULL || li->cursor == NULL) return 0;
    No* no_novo = (No*) malloc(sizeof(No));
    if (no_novo == NULL) return 0;
    no_novo->dados = dt;

    no_novo->prox = li->cursor;
    no_novo->ant = li->cursor->ant;
    li->cursor->ant = no_novo;

    if (no_novo->ant != NULL) { 
        no_novo->ant->prox = no_novo;
    } else { 
        li->inicio = no_novo;
    }
    li->cursor = no_novo; 
    return 1;
}

int insere_lista_depois_cursor(Lista *li, RankingData dt) {
    if (li == NULL || li->cursor == NULL) return 0;
    No* no_novo = (No*) malloc(sizeof(No));
    if (no_novo == NULL) return 0;
    no_novo->dados = dt;

    no_novo->prox = li->cursor->prox;
    no_novo->ant = li->cursor;

    if (li->cursor->prox != NULL) { 
        li->cursor->prox->ant = no_novo;
    }
    li->cursor->prox = no_novo;
    li->cursor = no_novo; 
    return 1;
}

int remove_lista_cursor(Lista *li) {
    if (li == NULL || li->cursor == NULL) return 0;
    
    No* no_remover = li->cursor;
    No* no_anterior = no_remover->ant;
    No* no_proximo = no_remover->prox;

    if (no_anterior != NULL) {
        no_anterior->prox = no_proximo;
    } else { 
        li->inicio = no_proximo;
    }

    if (no_proximo != NULL) {
        no_proximo->ant = no_anterior;
    }
    
    li->cursor = no_anterior;
    free(no_remover);
    return 1;
}

int busca_lista_id(Lista *li, int id) {
    if (li == NULL || li->inicio == NULL) return 0;

    No* no_atual = li->inicio;
    while (no_atual != NULL) {
        if (no_atual->dados.id == id) {
            li->cursor = no_atual; 
            return 1;
        }
        no_atual = no_atual->prox;
    }
    
    return 0;
}

void move_cursor_inicio(Lista *li) {
    if (li != NULL) {
        li->cursor = li->inicio;
    }
}

void move_cursor_fim(Lista *li) {
    if (li != NULL && li->inicio != NULL) {
        No *aux = li->inicio;
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        li->cursor = aux;
    }
}

void move_cursor_proximo(Lista *li) {
    if (li != NULL && li->cursor != NULL && li->cursor->prox != NULL) {
        li->cursor = li->cursor->prox;
    }
}

void exibe_lista_atual(Lista *li) {
    if (li != NULL && li->cursor != NULL) {
        printf("%d %s\n", li->cursor->dados.id, li->cursor->dados.nome);
    }
}

void exibe_lista_toda(Lista *li) {
    if (li == NULL || li->inicio == NULL) return;
    
    No* no_atual = li->inicio;
    while (no_atual != NULL) {
        printf("%d %s\n", no_atual->dados.id, no_atual->dados.nome);
        no_atual = no_atual->prox;
    }
}

void exibe_lista_vizinhos(Lista *li) {
    if (li == NULL || li->cursor == NULL) return;
    
    if (li->cursor->ant != NULL) {
        printf("%d %s\n", li->cursor->ant->dados.id, li->cursor->ant->dados.nome);
    }
    printf("%d %s\n", li->cursor->dados.id, li->cursor->dados.nome);
    if (li->cursor->prox != NULL) {
        printf("%d %s\n", li->cursor->prox->dados.id, li->cursor->prox->dados.nome);
    }
}