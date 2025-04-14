/*Você recebeu uma matriz de inteiros com 4 linhas e 5 colunas. Seu objetivo é contar quantos dos valores dessa matriz estão dentro de um intervalo fechado [A, B], ou seja, maiores ou iguais a A e menores ou iguais a B.

Entrada
A entrada é composta por:
° 20 inteiros, representando os valores da matriz 4 × 5, fornecidos linha por linha.
° 2 inteiros A e B (com A < B), representando os limites inferior e superior do intervalo, respectivamente.

Restrições
° Cada valor da matriz está no intervalo [-10⁴, 10⁴]. -10⁴ ≤ A < B ≤ 10⁴

Saída
Imprima um único número inteiro representando quantos elementos da matriz estão no intervalo [A, B].*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> matriz;
    while (matriz.size() < 20){
        int num;
        cin >> num;
        matriz.push_back(num);
        if(matriz.size() == 20){
            break;
        }
    }
    int min, max;
    cin >> min >> max;
    
    int cont=0;
    for(int i=0; i<matriz.size(); i++){
        if(min <= matriz[i] && matriz[i] <= max){
            cont++;
        }
    }
    cout << cont;
}
