/*Dado dois números inteiros x e y, sua tarefa é calcular x^y (ou seja, x elevado à potência y sem utilizar funções de potência embutidas na linguagem C, como pow.

Você deve implementar um algoritmo que realize a exponenciação apenas com operações básicas, como multiplicação e laços de repetição.
Entrada

A entrada consiste em dois inteiros x e y -10<= x <=10 e -10<= y <=10.
Saída

Imprima um único número inteiro correspondente ao resultado de x^y. */
#include <bits/stdc++.h>
using namespace std;

int main(){
    long int X, Y;
    cin >> X >> Y;

    if(Y==0){
        cout << 1;
    } else{
        int multiplicativo=X;

        for (int i=1; i<Y; i++){
            X*=multiplicativo;
        }
        cout << X;
    }
}