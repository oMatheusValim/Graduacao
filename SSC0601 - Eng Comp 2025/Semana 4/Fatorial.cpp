/*Dado um número inteiro não-negativo N, calcule o seu fatorial, representado por N!, que é o produto de todos os inteiros positivos de 1 até N. Por definição, 0! =1.
Entrada

A entrada consiste de uma única linha contendo um inteiro N (1<= N <= 20) Exp).
Saída

Imprima uma única linha com o valor de N!.*/
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