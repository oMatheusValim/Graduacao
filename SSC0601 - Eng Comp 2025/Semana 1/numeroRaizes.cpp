#include <bits/stdc++.h>
using namespace std;

int main(){
    float a, b, c;
    cin >> a >> b >> c;

    float delta = pow(b, 2) - 4 * a *c;
    
    if (delta > 0){
        cout << "Duas raizes reais";
    } else if (delta == 0){
        cout << "Uma raiz real";
    } else{
        cout << "Nenhuma raiz real";
    }
}