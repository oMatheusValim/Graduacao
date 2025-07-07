/*Ler 3 conjuntos de 10 números (3 vetores de números inteiros), que já estão ordenados e sem repetição (cada conjunto tem 10 números).
Os números inteiros terão no máximo 5 dígitos. 
Criar um vetor final que faz a “união” dos 3 vetores (30 números), mantendo os números ordenados ("merge sort" - Junta ordenadamente). */
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> linhas;
    std::vector<std::vector<int>> ordem;

    while(ordem.size()<3){
        if(ordem.size()==3){
            break;
        }
        while(linhas.size()<10){
            int num;
            cin >> num;
            linhas.push_back(num);
        }
        if(linhas.size() == 10){
            ordem.push_back(linhas);
            linhas.clear();
        }
    }
    vector<int> TodosOsNumeros;
    for(const auto& linha : ordem){
        TodosOsNumeros.insert(TodosOsNumeros.end(), linha.begin(), linha.end());
    }
    sort(TodosOsNumeros.begin(), TodosOsNumeros.end());

    for(int v : TodosOsNumeros){
        cout << v << " ";
    }
}