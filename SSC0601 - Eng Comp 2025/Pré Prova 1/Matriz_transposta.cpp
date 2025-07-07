/*Dada uma matriz de inteiros com N linhas e M colunas, implemente um programa que calcule e exiba a matriz transposta.

A transposta de uma matriz A de dimensões N x M é uma nova matriz B de dimensões M x N, em que cada elemento B[i][j] é igual a A[j][i]. Ou seja, as linhas se tornam colunas e as colunas se tornam linhas.
Entrada:

    A primeira linha contém dois inteiros N e M (1 ≤ N, M ≤ 100), representando o número de linhas e colunas da matriz.
    Em seguida, N linhas, cada uma contendo M inteiros, representando os elementos da matriz original.

Saída:

    Imprima M linhas com N inteiros cada, correspondentes à transposta da matriz de entrada.
*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
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


    vector<int> linhaT;
    for(int j=0; j<numColunas; j++){
        for(int i=0; i<numLinhas; i++){
            linhaT.push_back(Matriz[i][j]);
        }
        for(int elem : linhaT){
            cout << elem << " ";
        }
        linhaT.clear();
        cout << endl;
    }

}