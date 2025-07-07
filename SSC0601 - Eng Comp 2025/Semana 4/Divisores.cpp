/*Dado um número inteiro positivo N, sua tarefa é determinar todos os seus divisores e exibi-los em ordem crescente.
Entrada

A entrada consiste em um único número inteiro positivo N (1 <= N <= 10⁶).
Saída

A saída deve conter todos os divisores de N, separados por um espaço, em ordem crescente. */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=1; i <= N; i++){
        if(N%i==0){
            cout << i << " ";
        }
    }
}