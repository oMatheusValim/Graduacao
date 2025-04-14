/* Dado dois vetores de inteiros A e B, cada um contendo exatamente 5 elementos, sua tarefa é calcular o vetor S, onde cada elemento Si é a soma dos elementos correspondentes Ai e Bi.

Entrada
A entrada consiste de duas linhas:
 ° A primeira linha contém 5 inteiros, separados por espaço.
 ° A segunda linha contém 5 inteiros, separados por espaço.
Os inteiros estarão no intervalo de -1000 a 1000.

Saída
Imprima uma única linha contendo os 5 inteiros do vetor soma, separados por espaço.*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> A;
    vector<int> B;
    vector<int> S;

    int num;
    while(A.size()<5){
        cin >> num;
        A.push_back(num);
    }
    while(B.size()<5){
        cin >> num;
        B.push_back(num);
    }

    for(int i=0; i<A.size() && i<B.size(); i++){
        int soma = A[i] + B[i];
        S.push_back(soma); 
    }
    for(int v : S){
        cout << v << " ";
    }
}