#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int numBlocos, soma=0;
    cin >> numBlocos;

    vector<int> alturas;
    for(int a=0; a<numBlocos; a++){
        int valor;
        cin >> valor;
        alturas.push_back(valor);
    }

    for(int v : alturas){
        soma += v;
    }
    cout << soma;
}
