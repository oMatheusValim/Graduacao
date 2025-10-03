#include <stdio.h>
#include "lista.h"

int main() {
    Lista* li = cria_lista();
    if (li == NULL) {
        printf("Erro ao criar a lista!\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        struct dados_lista dt;
        scanf("%lf", &dt.numero);
        insere_lista_ordenada(li, dt);
    }
    imprime_lista(li);
    libera_lista(li);

    return 0;
}