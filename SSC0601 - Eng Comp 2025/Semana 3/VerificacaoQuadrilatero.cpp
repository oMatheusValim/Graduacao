#include <bits/stdc++.h>
using namespace std;

int main(){
    int l1, l2, l3, l4;
    cin >> l1 >> l2 >> l3 >> l4;

    if (l1 == l2 && l2 == l3 && l3 == l4){
        cout << "Losangulo";
    } else if(l1 == l2 && l3 == l4 || l2 == l3 && l1 == l4 || l2 == l4 && l1 == l3){
        cout << "Retangulo";
    } else if (l1 == l2 || l2 == l3 || l3==l4 || l1 == l3 || l1==l4 || l2 ==l4){
        cout << "Trapezio";
    } else {
        cout << "Irregular";
    }
}