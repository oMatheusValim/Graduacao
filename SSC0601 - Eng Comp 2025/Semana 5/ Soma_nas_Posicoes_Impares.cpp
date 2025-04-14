/* Você recebeu um vetor contendo exatamente 10 números inteiros. Sua tarefa é calcular a soma dos elementos que estão armazenados nas posições ímpares do vetor. Considere que os índices do vetor começam em 0.

Entrada
A entrada consiste em uma única linha contendo 10 números inteiros Exp separados por espaço, onde:
-10^4 <= Ai <= 10^4, para todo 0 <= i <= 9

Saída

Imprima um único número inteiro: a soma dos valores armazenados nas posições de índice ímpar (ou seja, nas posições 1, 3, 5, 7 e 9).*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> numeros;
    while(numeros.size()<10){
        int num;
        cin >> num;
        numeros.push_back(num);
    }

    int soma=0;
    for(int i=0; i<numeros.size(); i++){
        if(i%2!=0 && i!=0){
            soma+= numeros[i];
        }
    }
    cout << soma;
}