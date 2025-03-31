#include <bits/stdc++.h>
using namespace std;

int main(){
    float p1, p2, p3;
    cin >> p1 >> p2 >> p3;

    float notaFinal = (p1*3 + p2*5 + p3*2) / 10;

    if (notaFinal >= 7){
        cout << "Aprovado";
    } else if (4 <= notaFinal && notaFinal < 7){
        cout << "Exame";
    } else{
        cout << "Reprovado";
    }
}
