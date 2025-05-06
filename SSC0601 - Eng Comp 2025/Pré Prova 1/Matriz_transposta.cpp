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