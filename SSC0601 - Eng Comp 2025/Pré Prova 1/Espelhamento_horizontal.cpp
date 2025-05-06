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
