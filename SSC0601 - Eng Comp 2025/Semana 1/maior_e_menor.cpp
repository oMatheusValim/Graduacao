/*Escreva um programa que leia dois números inteiros e exiba qual é o maior deles. Caso os números sejam iguais, informe que são iguais imprimindo a mensagem "igual".*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;

    cin >> n1 >> n2;

    if (n1 == n2){
        cout << "igual";
    } else if(n1 > n2){
        cout << n1;
    } else{
        cout << n2;
    }
}
