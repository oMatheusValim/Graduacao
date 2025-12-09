#ifndef P1_H
#define P1_H

typedef struct{
    int dia;
    int mes;
    int ano;
    double temp_max;
} TemperaturaData;

typedef struct no {
    TemperaturaData dados;
    struct no *ant;
    struct no *prox;
} No;

typedef No* Lista;
Lista* cria_lista();
void libera_lista(Lista* li);
int insere_lista_final(Lista* li, TemperaturaData dt);

#endif
