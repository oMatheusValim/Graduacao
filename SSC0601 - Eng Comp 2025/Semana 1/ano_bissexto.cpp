#include <bits/stdc++.h>
using namespace std;

int main(){
    int ano;

    cin >> ano;

    if (ano%4==0 && ano%100!=0 || ano%400==0){
        cout << "e ano bissexto";
    } else {
        cout << "nao e ano bissexto";
    }
}
