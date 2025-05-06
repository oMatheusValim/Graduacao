#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Matheus Valim Nogueira, 15746323

int main(){
    int numXW;
    float BIAS;
    vector<float> X;
    vector<float> W;

    cin >> numXW;
    cin >> BIAS;

    float valor;
    while(X.size()<numXW){
        cin >> valor;
        X.push_back(valor);
        if(X.size() == numXW){
            break;
        }
    }
    while(W.size()<numXW){
        cin >> valor;
        W.push_back(valor);
        if(W.size() == numXW){
            break;
        }
    }

    float c=0;
    for(int i=0; i<numXW; i++){
        c += X[i] * W[i];
    }
    c += BIAS;

    std::cout << std::fixed << std::setprecision(2) << c << endl;

    if(c >= 0){
        cout << "ATIVADO";
    } else{
        cout << "INATIVO";
    }




}
