#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    int denominador=1;
    vector<double> divisoes;

    long double divi=0;
    for(int i=0; i < n; i++){
        if(i%2!=0){
            divi = - 4.0/denominador;
        } else{
            divi = 4.0/denominador;
        }

        divisoes.push_back(divi);  
        denominador += 2;
    }
    
    long double soma =0;
    for(int j=0; j < divisoes.size(); j++){
        soma += divisoes[j];
    }
    std::cout << std::fixed << std::setprecision(6) << soma;
}