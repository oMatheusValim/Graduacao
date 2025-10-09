/*
PRINCIPAIS FUNÇÕES
    1. inserção no início
    2. inserção no final
    3. inserção antes ou depois do atual (cursos do buscar ID)
    4. buscar ID (mover o cursor)
    5. remover item buscado (ID, cursor atual move p/ anterior)
    6. move o cursor para o inicio
    7. move o cursor para o fim
    8. lista todos
    9. listar vizinhança do cursor (anterior, atual e proximo)
    10. exibir atual (cursor)
*/

#include <stdio.h>
#include <string.h>
#include "lista_LDED.h"

int main() {
    Lista *li = cria_lista();
    char comando;
    RankingData dt;

    while (scanf(" %c", &comando) && comando != 'X') {
        switch (comando) {
            case 'I':
                scanf("%d %s", &dt.id, dt.nome);
                insere_lista_inicio(li, dt);
                break;
            case 'F':
                scanf("%d %s", &dt.id, dt.nome);
                insere_lista_final(li, dt);
                break;
            case 'A':
                scanf("%d %s", &dt.id, dt.nome);
                insere_lista_antes_cursor(li, dt);
                break;
            case 'D':
                scanf("%d %s", &dt.id, dt.nome);
                insere_lista_depois_cursor(li, dt);
                break;
            case 'B':
                scanf("%d", &dt.id);
                busca_lista_id(li, dt.id);
                break;
            case 'R':
                remove_lista_cursor(li);
                break;
            case 'S':
                move_cursor_inicio(li);
                break;
            case 'E':
                move_cursor_fim(li);
                break;
            case 'N':
                move_cursor_proximo(li);
                break;
            case 'P':
                exibe_lista_atual(li);
                break;
            case 'L':
                exibe_lista_toda(li);
                break;
            case 'V':
                exibe_lista_vizinhos(li);
                break;
            default:
                {
                    char c;
                    while ((c = getchar()) != '\n' && c != EOF);
                }
                break;
        }
    }

    libera_lista(li);
    return 0;
}