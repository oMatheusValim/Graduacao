#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Carro{
    string fabricante, modelo, cor;
    int ano;
    double preco;
};

int main(){
    int numCarros;
    cin >> numCarros;

    vector<Carro> car(numCarros);
    for(int i=0; i<numCarros; i++){
        cin >> car[i].fabricante >> car[i].modelo >> car[i].ano >>  car[i].cor >>  car[i].preco;
    }

    string modeloBarato = car[0].modelo;
    double precoBarato = car[0].preco;

    for(int i=1; i<numCarros; i++){
        if(precoBarato > car[i].preco){
            precoBarato = car[i].preco;
            modeloBarato = car[i].modelo;
        }
    }
    cout << modeloBarato << endl;

}