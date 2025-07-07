/*Criei um programa que receba um número inteiro e informe se ele é par ou ímpar. Para isso, utilize a operação de módulo (%). Seu programa deve imprimir "impar" ou "par"
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1;

    cin >> n1;

    if (n1%2==0){
        cout << "par";
    } else {
        cout << "impar";
    }
}
