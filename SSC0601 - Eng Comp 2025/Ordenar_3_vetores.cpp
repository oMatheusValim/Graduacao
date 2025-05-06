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