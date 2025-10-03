#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

// Define a estrutura do nó da lista (elemento).
// Contém os dados e um ponteiro para o próximo nó.
struct elemento {
    struct dados_lista dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

Lista* cria_lista() {
    // Aloca memória para o ponteiro de início da lista.
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if (li != NULL) {
        *li = NULL; // A lista começa vazia, apontando para NULL.
    }
    return li;
}

void libera_lista(Lista* li) {
    if (li != NULL) {
        Elem* no;
        // Percorre a lista, liberando cada nó.
        while ((*li) != NULL) {
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        // Libera o ponteiro de início
        free(li);
    }
}

int insere_lista_ordenada(Lista* li, struct dados_lista dt) {
    if (li == NULL) {
        return 0;
    }
    // Aloca memória para o novo elemento.
    Elem* no = (Elem*) malloc(sizeof(Elem));
    if (no == NULL) {
        return 0;
    }
    no->dados = dt; // Copia os dados para o nó.

    // Caso 1: A lista está vazia ou o novo elemento é menor que o primeiro.
    if (*li == NULL || (*li)->dados.numero > no->dados.numero) {
        no->prox = *li;
        *li = no;
        return 1;
    }

    // Caso 2: Percorrer a lista para encontrar o local de inserção. 
    Elem *ant = *li;
    Elem *atual = (*li)->prox;
    while (atual != NULL && atual->dados.numero < no->dados.numero) {
        ant = atual;
        atual = atual->prox;
    }
    ant->prox = no;
    no->prox = atual;

    return 1;
}

void imprime_lista(Lista* li) {
    if (li == NULL || *li == NULL) {
        return; // Lista não existe ou está vazia.
    }
    Elem* no = *li;
    while (no != NULL) {
        printf("%.2f \n", no->dados.numero);
        no = no->prox;
    }
    // printf("\n");
}