#include <bits/stdc++.h>
using namespace std;

long int fatorial(int numero){
    if(numero == 0){
        return 1;
    }
    return fatorial(numero-1)  * numero;
}

int main(){
    int numero;
    cin >> numero;
    if(numero <0){
        cout << "ERRO";
    } else{
        cout << fatorial(numero);
    }

}