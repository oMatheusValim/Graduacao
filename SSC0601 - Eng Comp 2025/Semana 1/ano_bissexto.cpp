/*Escreva um programa que leia um ano e determine se ele é bissexto ou não. Um ano é bissexto se for divisível por 4, mas não por 100, exceto se for divisível por 400. A saída do programa deve ser "e ano bissexto" ou "nao e ano bissexto".*/
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
