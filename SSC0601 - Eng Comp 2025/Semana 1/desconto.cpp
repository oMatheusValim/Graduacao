#include <bits/stdc++.h>
using namespace std;

int main(){
    float valor;

    cin >> valor;

    if (valor > 100){
        valor = valor*0.9;
    }
    std::cout << std::fixed << std::setprecision(2) << valor;
}
