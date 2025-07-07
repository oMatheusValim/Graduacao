/*Durante uma missão de exploração em Marte, a sonda OrtoBot precisa montar uma estrutura de painéis solares. Para que ela funcione corretamente, os suportes dos painéis devem ser posicionados perpendicularmente entre si. A central de comando na Terra envia dois vetores que representam a direção de duas barras da estrutura. A tarefa do sistema de navegação da OrtoBot é calcular automaticamente um vetor ortogonal a esses dois vetores (ou seja, o produto vetorial).

Como programador responsável pelo sistema da sonda, sua missão é implementar esse cálculo. Para isso, você deve utilizar structs para representar vetores tridimensionais.
Entrada

A entrada consiste em duas linhas, cada uma contendo três números inteiros, representando as coordenadas dos vetores no espaço tridimensional R³. Cada número representa a coordenada x, y, e z do vetor, nesta ordem.

    -1000 <= x, y, z <= 1000
    Os vetores fornecidos não são paralelos.

Saída

Imprima uma única linha com três números inteiros separados por espaço, representando as coordenadas x, y, e z do vetor ortogonal resultante do produto vetorial entre os dois vetores de entrada.
*/
#include <bits/stdc++.h>
using namespace std;

struct Vetor {
    int x, y, z;

    Vetor ProdutoVetorial(const Vetor& outro) {
        Vetor resultado;
        resultado.x = y * outro.z - z * outro.y;
        resultado.y = z * outro.x - x * outro.z;
        resultado.z = x * outro.y - y * outro.x;
        return resultado;
    }
};

int main() {
    Vetor p1, p2;
    cin >> p1.x >> p1.y >> p1.z;
    cin >> p2.x >> p2.y >> p2.z;

    Vetor resultado = p1.ProdutoVetorial(p2);
    cout << resultado.x << " " << resultado.y << " " << resultado.z << endl;

    return 0;
}
