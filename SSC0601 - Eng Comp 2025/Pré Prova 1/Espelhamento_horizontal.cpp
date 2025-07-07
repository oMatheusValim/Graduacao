/*Considere uma matriz de inteiros com N linhas e M colunas. Você deve implementar um programa que produza uma nova matriz obtida por espelhamento horizontal, isto é, cada linha da matriz deve ser invertida da esquerda para a direita, como se fosse refletida em um espelho vertical.

Por exemplo, a linha [1, 2, 3, 4] deve ser transformada em [4, 3, 2, 1].
Entrada:

    A primeira linha contém dois inteiros N e M (1 ≤ N, M ≤ 100), representando o número de linhas e colunas da matriz.
    Em seguida, serão dadas N linhas, cada uma contendo M inteiros, representando os elementos da matriz original.

Saída:

    Imprima N linhas com M inteiros cada, correspondentes à matriz após o espelhamento horizontal.
*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int numLinhas, numColunas;
    cin >> numLinhas >> numColunas;
    vector<int> linha;
    vector<vector<int>> Matriz;

    while(Matriz.size() < numLinhas){
        int elemento;
        cin >> elemento;
        linha.push_back(elemento);
        if(linha.size() == numColunas){
            Matriz.push_back(linha);
            linha.clear();
        }
        if(Matriz.size() == numLinhas){
            break;
        }
    }
    vector<int> inversa;
    for(int i=0; i<numLinhas; i++){
        for(int j=numColunas-1; j>-1; j--){
            inversa.push_back(Matriz[i][j]);

            if(j==0){
                for(int valores : inversa){
                    cout << valores << " ";
                }
                cout << endl;
                inversa.clear();
                break;
            }

        }
    }
}
