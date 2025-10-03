// Define a estrutura dos dados que serão armazenados em cada nó da lista.
struct dados_lista {
    double numero;
};

// Define 'Lista' como um ponteiro para o ponteiro do elemento inicial.
// Isso esconde um nível de ponteiro do usuário, mantendo a modularização
typedef struct elemento* Lista;

Lista* cria_lista();

void libera_lista(Lista* li);

int insere_lista_ordenada(Lista* li, struct dados_lista dt);

void imprime_lista(Lista* li);