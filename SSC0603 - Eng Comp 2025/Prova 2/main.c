#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"
#include "arvore.h"

#define ARQUIVO_PALAVRAS "words10000.txt"

int main() {
    Arvore *raiz = cria_arvore();
    Lista *li_dummy = cria_lista(); 

    FILE *f = fopen(ARQUIVO_PALAVRAS, "r");
    if (f == NULL) {
        printf("Erro ao abrir %s\n", ARQUIVO_PALAVRAS);
        return 1;
    }

    char buffer[200];
    TipoDado dado;

    while (fgets(buffer, sizeof(buffer), f) != NULL) {
        buffer[strcspn(buffer, "\n")] = 0;
        buffer[strcspn(buffer, "\r")] = 0;

        if (buffer[0] == '$') break;

        strcpy(dado.palavra, buffer); 
        insere_arvore_avl(raiz, dado); 
    }
    fclose(f);

    int modo;    
    int n;       
    char prefixo[100];

    if (scanf("%d", &modo) != 1) return 0;
    if (scanf("%d", &n) != 1) return 0;
    if (scanf("%s", prefixo) != 1) return 0;

    if (modo == 0) {
        // Modo 0: Exibe na ordem que encontra na árvore 
        busca_prefixo(raiz, prefixo, n, 0, NULL);
    } 
    else if (modo == 1) {
        // Modo 1: Cria nova árvore e exibe ordenado 
        Arvore *arvore_temp = cria_arvore();
        
        // Busca e preenche a árvore temporária
        busca_prefixo(raiz, prefixo, n, 1, arvore_temp);
        
        // Exibe a árvore temporária em ordem
        exibe_arvore_ordenada(arvore_temp);
        
        libera_arvore(arvore_temp);
    }

    // 5. Limpeza
    libera_arvore(raiz);
    libera_lista(li_dummy);

    return 0;
}