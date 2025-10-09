#ifndef LISTA_LDED_H
#define LISTA_LDED_H

typedef struct {
    int id;
    char nome[16];
} RankingData;

typedef struct no {
    RankingData dados;
    struct no *ant;
    struct no *prox;
} No;

typedef struct {
    No *inicio;
    No *cursor;
} Lista;

Lista* cria_lista();
void libera_lista(Lista *li);

int insere_lista_inicio(Lista *li, RankingData dt);
int insere_lista_final(Lista *li, RankingData dt);
int insere_lista_antes_cursor(Lista *li, RankingData dt);
int insere_lista_depois_cursor(Lista *li, RankingData dt);

int remove_lista_cursor(Lista *li);
int busca_lista_id(Lista *li, int id);

void move_cursor_inicio(Lista *li);
void move_cursor_fim(Lista *li);
void move_cursor_proximo(Lista *li);

void exibe_lista_atual(Lista *li);
void exibe_lista_toda(Lista *li);
void exibe_lista_vizinhos(Lista *li);

#endif