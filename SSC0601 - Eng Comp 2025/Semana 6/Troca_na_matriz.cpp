/*Você deve escrever um programa que leia uma matriz de inteiros 5x5 e realize a troca entre a 3ª linha e a 3ª coluna da matriz. Após a troca, a matriz resultante deve ser impressa.

Entrada
A entrada consiste de 5 linhas, cada uma contendo 5 inteiros, separados por espaço. Cada inteiro A[i][j] satisfaz as seguintes condições:
-10^3 <=  A[i][j] <= 10^3

Saída
Imprima a matriz resultante após a troca da 3ª linha com a 3ª coluna. A saída deve conter 5 linhas, cada uma com 5 inteiros separados por espaço.*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    std::vector<std::vector<int>> matriz;
    vector<int> linha;

    while(matriz.size() < 5){
        int num;
        cin >> num;
        linha.push_back(num);
        if(linha.size() ==5){
            matriz.push_back(linha);
            linha.clear();
        }
        if(matriz.size() == 5){
            break;
        }
    }
    
    int memo = matriz[0][2]; 
    matriz[0][2] = matriz[2][0];
    matriz[2][0] = memo;

    memo = matriz[1][2];
    matriz[1][2] = matriz[2][1];
    matriz[2][1] = memo;

    memo = matriz[3][2];
    matriz[3][2] = matriz[2][3];
    matriz[2][3] = memo;

    memo = matriz[4][2];
    matriz[4][2] = matriz[2][4];
    matriz[2][4] = memo;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout << matriz[i][j];
            if(j == 4){
                cout << endl;
            } else{
                cout << " ";
            }
        }
    }
}