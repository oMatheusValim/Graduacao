/* Você deve escrever um programa que leia um conjunto de 10 números inteiros e imprima esses números na ordem inversa em que foram fornecidos.

Entrada
A entrada consiste de uma única linha contendo 10 números inteiros separados por espaços.

Saída
Imprima uma única linha contendo os mesmos 10 números fornecidos na entrada, mas na ordem inversa, também separados por espaços.*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> numeros;
    while(numeros.size()<10){
        int num;
        cin >> num;
        numeros.insert(numeros.begin(), num);
    }

    for(int i=0; i<numeros.size(); i++){
        cout << numeros[i] << " ";
    }

}