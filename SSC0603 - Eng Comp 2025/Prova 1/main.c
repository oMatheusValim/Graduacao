/*
lê o arquivo "dados.txt"

recebe dia, mes e ano inteiros, separados por espaço e a temperatura máxima do dia(com 2 casas decimais de precisão)
EXEMPLO
09 10 2025 25.05

while(dia == mes == ano == tempo != -1)
{
segue pedindo valores
}

armazenar as temperaturas em uma lista encadeada na ordem que foram fornecidas, o -1 não é adicionado

* printf(numero de linhas lidas)
* printf(f'{dia} {mes} {ano} {temperatura máxima})
* printf(Tx_maior) - retorna o num de dias que Tx > Tx-delta (se Tx = 15 e como delta é 4, qualquer dia que tenha mais que 11 graus será contabilizado)
* printf(Tmax_delta_antes) - na qual vai retornar o num de dias, antes de Tmax, que a Tx > Tmax-4 (se Tmax = 10, o Tx precisa ser acima de 6 para contabilizar)
* printf(Tmax_delta_depois) - na qual vai retornar o num de dias, depois de Tmax, que a Tx > Tmax-4 (se Tmax = 10, o Tx precisa ser acima de 6 para contabilizar)

importante verificar se a o print 5 + print 4 = print 3 - por questões de precisão de conta

*/
#include <stdio.h>
#include <stdlib.h>
#include "p1.h"

int main() {
    Lista* li = cria_lista();
    TemperaturaData dt;
    int total_dados = 0;

    FILE *arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
       
    }
    
    FILE *entrada = (arquivo != NULL) ? arquivo : stdin;

    while (fscanf(entrada, "%d %d %d %lf", &dt.dia, &dt.mes, &dt.ano, &dt.temp_max) == 4) {
        if (dt.dia == -1 && dt.mes == -1 && dt.ano == -1) {
            break; 
        }
        insere_lista_final(li, dt);
        total_dados++;
    }

    if (arquivo != NULL) {
        fclose(arquivo);
    }
    
    if (total_dados == 0) {
        printf("Nenhum dado lido.\n");
        libera_lista(li);
        return 0;
    }

    No* no_atual = *li;
    No* no_tmax = no_atual; 
    
    // Percorre a lista para encontrar o verdadeiro nó com a TMax
    while (no_atual != NULL) {
        if (no_atual->dados.temp_max > no_tmax->dados.temp_max) {
            no_tmax = no_atual;
        }
        no_atual = no_atual->prox;
    }
    
    double tmax_valor = no_tmax->dados.temp_max;
    double delta = 4.0;
    double limite_temp = tmax_valor - delta;

    // 2.2 Contar total de dias com Tx > TMax-Delta
    int dias_acima_limite_total = 0;
    no_atual = *li;
    while (no_atual != NULL) {
        if (no_atual->dados.temp_max >= limite_temp) {
            dias_acima_limite_total++;
        }
        no_atual = no_atual->prox;
    }
    
    // 2.3 Contar dias seguidos ANTES de TMax
    int dias_antes = 0;
    No* no_anterior = no_tmax->ant;
    while(no_anterior != NULL && no_anterior->dados.temp_max >= limite_temp){
        dias_antes++;
        no_anterior = no_anterior->ant;
    }

    // 2.4 Contar dias seguidos DEPOIS de TMax
    int dias_depois = 0;
    No* no_proximo = no_tmax->prox;
    while(no_proximo != NULL && no_proximo->dados.temp_max >= limite_temp){
        dias_depois++;
        no_proximo = no_proximo->prox;
    }

    // 3. Exibir os resultados no formato exato solicitado
    // 3.1 Total de dados
    printf("%d\n", total_dados);

    // 3.2 Temperatura máxima e sua data
    printf("%d %d %d %.2f\n", no_tmax->dados.dia, no_tmax->dados.mes, no_tmax->dados.ano, tmax_valor);
    
    // 3.3 Total de dias acima do limite (TMax - Delta)
    printf("%d\n", dias_acima_limite_total);
    
    // 3.4 Dias seguidos ANTES do TMax acima do limite
    printf("%d\n", dias_antes);

    // 3.5 Dias seguidos DEPOIS do TMax acima do limite
    printf("%d\n", dias_depois);

    // Libera a memória alocada para a lista antes de terminar
    libera_lista(li);

    return 0;
}
