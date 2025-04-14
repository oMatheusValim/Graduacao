/*Dado um vetor A contendo exatamente 10 números inteiros, determine qual é a maior diferença entre dois elementos consecutivos. A diferença entre dois elementos consecutivos é calculada como:

diferença = |A[i+1] - A[i]|

Sua tarefa é imprimir o maior valor encontrado entre todas as diferenças consecutivas do vetor.

Entrada
A entrada consiste de uma única linha com 10 inteiros separados por espaço, representando os elementos do vetor A (−10⁴ ≤ A[i] ≤ 10⁴).

Saída
Imprima um único inteiro representando a maior diferença absoluta entre dois elementos consecutivos do vetor.*/

#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    vector<int> vetor;
    while(vetor.size()<10){
        int num;
        cin >> num;
        vetor.push_back(num);
    }

    int maiorDif = 0;
    for(int i=1; i<vetor.size(); i++){
        if(abs(vetor[i-1] - vetor[i]) > maiorDif){
            maiorDif=abs(vetor[i-1] - vetor[i]);
        }
    }
    cout << maiorDif;
}