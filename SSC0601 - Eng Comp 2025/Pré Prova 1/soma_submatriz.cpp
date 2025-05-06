#include <iostream>
#include <vector>
using namespace std;

int main() {
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

    int numConsultas;
    cin >> numConsultas;

    while(numConsultas--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        vector<int> SubMatriz;


        for(int i=x1; i<=x2; i++){
            for(int j=y1; j<=y2; j++){
                SubMatriz.push_back(Matriz[i][j]);
            }
        }
        int soma=0;
        for(int valores : SubMatriz){
            soma+= valores;
        }
        cout << soma << endl;
    }
    return 0;
}