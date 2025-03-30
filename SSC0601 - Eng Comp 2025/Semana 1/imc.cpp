#include <bits/stdc++.h>
using namespace std;

int main(){
    float altura, peso;

    cin >> peso >> altura;

    float imc = peso/(altura*altura);

    if (18.5 > imc){
        cout << "Abaixo do peso";
    } else if (18.5 <= imc && imc < 24.99){
        cout << "Peso normal"; 
    } else if (25 <= imc && imc < 29.99){
        cout << "Sobrepeso";
    } else{
        cout << "Obesidade";
    }
} 