#include <bits/stdc++.h>
using namespace std;

int main(){
    float nota1, nota2;

    cin >> nota1 >> nota2;

    float media = (nota1+nota2) / 2;

    if (media >= 8){
        cout << "Aprovado";
    } else{
        cout << "Reprovado";
    }
}
