/*Você deve escrever um programa que leia uma matriz de inteiros com 4 linhas e 5 colunas. Em seguida, o programa deve calcular a soma dos elementos de cada coluna e imprimir essas somas em uma única linha, separadas por espaços.

Entrada
A entrada consiste em 4 linhas, cada uma contendo 5 inteiros separados por espaço, representando uma matriz de tamanho 4×5.

Saída
A saída deve conter uma única linha com 5 inteiros, onde o i-ésimo número representa a soma dos elementos da i-ésima coluna da matriz. Os valores devem ser separados por um único espaço.*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> linhas;
    std::vector<std::vector<int>> matriz;

    while(matriz.size()<4){
        if(linhas.size() == 5){
            matriz.push_back(linhas);
            linhas.clear();
        }
        if(matriz.size() >= 4){
            break;
        }
        int num;
        cin >> num;
        linhas.push_back(num);
    }
    vector<int> somas;
    for(int j=0; j<5; j++){
        int soma=0;
        for(int i=0; i<4; i++){
            int valor = matriz[i][j];
            soma+=valor;
        }
        somas.push_back(soma);
    }
    for(int v : somas){
        cout << v << " ";
    }
}