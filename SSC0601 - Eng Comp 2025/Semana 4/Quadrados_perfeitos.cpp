/*Dado um número inteiro positivo N, determine todos os números de 1 a N que são quadrados perfeitos. Um número é um quadrado perfeito se sua raiz quadrada for um número inteiro.

Você não pode usar funções embutidas da linguagem C para cálculo de potência ou raiz quadrada.
Entrada

A entrada consiste em um único número inteiro positivo N (1≤N≤10^4)).
Saída

Seu programa deve imprimir, em ordem crescente, todos os números de 1 a N que são quadrados perfeitos. Cada número deve ser impresso em uma linha separada. */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    float possiveis = N/2;
    if(N==1){
        possiveis=N;
    }

    for(int i=1; i<=N; i++){
        for(int j=1; j<=possiveis; j++){
            if (j*j == i){
                cout << i << endl;
                break;
            }
        }

    }
}