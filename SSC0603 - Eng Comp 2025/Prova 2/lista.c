#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

Lista* cria_lista(){
    Lista* li = (Lista*)calloc(1,sizeof(Lista));
    if(li != NULL) *li = NULL;
    return li;
}

void libera_lista(Lista *li){
    if(li == NULL) return;
    ElemLDE *no;
    while((*li) != NULL){
        no = *li;
        *li = (*li)->prox;
        free(no);
    }
    free(li);
}