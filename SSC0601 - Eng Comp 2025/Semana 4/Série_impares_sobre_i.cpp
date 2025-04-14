#include <bits/stdc++.h>
using namespace std;

int main(){
    int nTermos, numerador=1, denominador=1;
    double resultado=0;
    cin >> nTermos;

    while(nTermos >= denominador){
        resultado += (double)numerador/denominador;
        numerador += 2;
        denominador++;
    }
    std::cout << std::fixed << std::setprecision(6) <<  resultado;
}