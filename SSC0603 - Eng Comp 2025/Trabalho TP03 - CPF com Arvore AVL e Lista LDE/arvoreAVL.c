#include <stdlib.h>
#include <stdio.h>
#include "arvoreAVL.h"

// Retorna a altura armazenada no nó ou -1 se for NULL
int altura_no(ElemABO* no){
    if(no == NULL) return -1;
    return no->altura;
}

// Calcula o fator de balanceamento (Esq - Dir)
int fator_balanceamento(ElemABO* no){
    if(no == NULL) return 0;
    return altura_no(no->esq) - altura_no(no->dir);
}

// Função auxiliar para pegar o maior valor entre dois inteiros
int maior(int x, int y){
    return (x > y) ? x : y;
}

void RotacaoLL(Arvore *raiz){
    ElemABO *no;
    no = (*raiz)->esq;
    (*raiz)->esq = no->dir;
    no->dir = *raiz;
    
    // Atualiza alturas
    (*raiz)->altura = maior(altura_no((*raiz)->esq), altura_no((*raiz)->dir)) + 1;
    no->altura = maior(altura_no(no->esq), (*raiz)->altura) + 1;
    
    *raiz = no;
}

void RotacaoRR(Arvore *raiz){
    ElemABO *no;
    no = (*raiz)->dir;
    (*raiz)->dir = no->esq;
    no->esq = *raiz;
    
    (*raiz)->altura = maior(altura_no((*raiz)->esq), altura_no((*raiz)->dir)) + 1;
    no->altura = maior(altura_no(no->dir), (*raiz)->altura) + 1;
    
    *raiz = no;
}

// Rotação Dupla Esquerda-Direita
void RotacaoLR(Arvore *raiz){
    RotacaoRR(&(*raiz)->esq);
    RotacaoLL(raiz);
}

// Rotação Dupla Direita-Esquerda
void RotacaoRL(Arvore *raiz){
    RotacaoLL(&(*raiz)->dir);
    RotacaoRR(raiz);
}

Arvore *cria_arvore(){
    Arvore *raiz = (Arvore*)malloc(sizeof(Arvore));
    if(raiz != NULL) *raiz = NULL;
    return raiz;
}

void libera_no_recursivo(ElemABO *no) {
    if (no == NULL) return;
    libera_no_recursivo(no->esq);
    libera_no_recursivo(no->dir);
    free(no);
}

void libera_arvore(Arvore *raiz){
    if(raiz == NULL) return;
    libera_no_recursivo(*raiz);
    free(raiz);
}

int insere_arvore_avl_recursivo(Arvore *raiz, Lista *li, TipoDadoABO Dado){
    if(*raiz == NULL){
        ElemABO *novo = (ElemABO*)malloc(sizeof(ElemABO));
        if(novo == NULL) return 0;
        
        novo->Dado = Dado;
        novo->link = busca_no(li, Dado.cpf);
        novo->altura = 0;
        novo->esq = NULL;
        novo->dir = NULL;
        *raiz = novo;
        return 1;
    }

    ElemABO *atual = *raiz;
    
    if(Dado.cpf < atual->Dado.cpf){
        // Inserção na Esquerda
        if(insere_arvore_avl_recursivo(&(atual->esq), li, Dado)){
            // Verifica balanceamento APÓS inserir
            if(fator_balanceamento(atual) >= 2){
                if(Dado.cpf < (*raiz)->esq->Dado.cpf)
                    RotacaoLL(raiz);
                else
                    RotacaoLR(raiz);
            }
        }
    } else {
        // Inserção na Direita
        if(insere_arvore_avl_recursivo(&(atual->dir), li, Dado)){
            // Verifica balanceamento APÓS inserir
            if(fator_balanceamento(atual) <= -2){ 
                if(Dado.cpf > (*raiz)->dir->Dado.cpf)
                    RotacaoRR(raiz);
                else
                    RotacaoRL(raiz);
            }
        }
    }

    // Atualiza a altura do nó atual
    (*raiz)->altura = maior(altura_no((*raiz)->esq), altura_no((*raiz)->dir)) + 1;
    
    return 1;
}

int insere_arvore_avl(Arvore *raiz, Lista *li, TipoDadoABO Dado){
    return insere_arvore_avl_recursivo(raiz, li, Dado);
}

int conta_altura(Arvore *raiz){
    if(raiz == NULL || *raiz == NULL) return 0;
    return (*raiz)->altura + 1;
}

int exibe_primeiro_no(Arvore *raiz){
    if (raiz == NULL || *raiz == NULL) return 0;
    ElemABO *aux = *raiz;
    while(aux->esq != NULL) aux = aux->esq;
    exibe_nodo(aux->link);
    return 1;
}

int exibe_ultimo_no(Arvore *raiz){
    if (raiz == NULL || *raiz == NULL) return 0;
    ElemABO *aux = *raiz;
    while(aux->dir != NULL) aux = aux->dir;
    exibe_nodo(aux->link);
    return 1;
}

void _grava_ordem(ElemABO *no, FILE *Arq){
    if (no == NULL) return;
    _grava_ordem(no->esq, Arq);
    fprintf(Arq, "%09ld\n", no->Dado.cpf);
    _grava_ordem(no->dir, Arq);
}

int grava_dados_arvore_ordem(Arvore *raiz){
    if (raiz == NULL || *raiz == NULL) return 0;
    FILE *Arq = fopen("dados2.txt", "wt");
    if(Arq == NULL) return 0;
    _grava_ordem(*raiz, Arq);
    fclose(Arq);
    return 1;
}

void _grava_pre_ordem_detalhado(ElemABO *no, FILE *Arq){
    if (no == NULL) return;

    fprintf(Arq, "%09ld E: ", no->Dado.cpf);
    
    if(no->esq != NULL) fprintf(Arq, "%09ld D: ", no->esq->Dado.cpf);
    else fprintf(Arq, "NULL D: ");
    
    if(no->dir != NULL) fprintf(Arq, "%09ld\n", no->dir->Dado.cpf);
    else fprintf(Arq, "NULL\n");

    _grava_pre_ordem_detalhado(no->esq, Arq);
    _grava_pre_ordem_detalhado(no->dir, Arq);
}

int grava_dados_arvore_pre_ordem(Arvore *raiz){
    if (raiz == NULL || *raiz == NULL) return 0;
    FILE *Arq = fopen("dados3.txt", "wt");
    if(Arq == NULL) return 0;
    _grava_pre_ordem_detalhado(*raiz, Arq);
    fclose(Arq);
    return 1;
}