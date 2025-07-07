/*Você recebeu uma matriz de inteiros com N linhas e M colunas. Seu objetivo é responder a uma série de consultas, onde cada consulta solicita a soma dos elementos em uma submatriz retangular.
Cada submatriz é definida por dois pares de coordenadas: o canto superior esquerdo (x1, y1) e o canto inferior direito (x2, y2).

As coordenadas seguem o padrão de indexação zero (ou seja, a primeira linha e a primeira coluna são indexadas como 0).

Escreva um programa que processe todas as consultas e retorne a soma dos elementos dentro das respectivas submatrizes especificadas.
Entrada:

    A primeira linha contém dois inteiros N e M (1 ≤ N, M ≤ 100), representando o número de linhas e colunas da matriz.
    As próximas N linhas contêm M inteiros cada, representando os elementos da matriz. Cada elemento A[i][j] satisfaz -10⁴ ≤ A[i][j] ≤ 10⁴.
    A linha seguinte contém um inteiro Q (1 ≤ Q ≤ 1000), o número de consultas.
    Em seguida, seguem Q linhas, cada uma contendo quatro inteiros x1 y1 x2 y2 (0 ≤ x1 ≤ x2 < N, 0 ≤ y1 ≤ y2 < M), representando os limites da submatriz para a consulta atual.

Saída:

Para cada uma das Q consultas, seu programa deve imprimir uma linha contendo a soma dos elementos na submatriz especificada.*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numLinhas, numColunas;
    cin >> numLinhas >> numColunas;
    vector<int> VetorLinha;
    vector<vector<int>> Matriz;

    while(numLinhas > Matriz.size()){
        int elementosMatriz;
        cin >> elementosMatriz;
        VetorLinha.push_back(elementosMatriz);

        if(VetorLinha.size() == numColunas){
            Matriz.push_back(VetorLinha);
            VetorLinha.clear();
        }
        if(Matriz.size() == numLinhas){
            break;
        }
    }

    int numConsultas;
    cin >> numConsultas;

    while(numConsultas--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        vector<int> SubMatriz;


        for(int i=x1; i<=x2; i++){
            for(int j=y1; j<=y2; j++){
                SubMatriz.push_back(Matriz[i][j]);
            }
        }
        int soma=0;
        for(int valores : SubMatriz){
            soma+= valores;
        }
        cout << soma << endl;
    }
    return 0;
}