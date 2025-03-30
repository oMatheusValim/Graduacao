#include <bits/stdc++.h>
using namespace std;

int main(){
    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;

    if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1){
        cout << "Triangulo Valido";
    } else{
        cout << "Triangulo Invalido";
    }
}
