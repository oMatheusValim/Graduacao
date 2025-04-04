#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
    int num;
    cin >> num;

    if (num > 1000){
        cout << "ALERTA!";
        system("play -n synth 0.1 sine 440");
    } else {
        cout << "OK";
    }
}
