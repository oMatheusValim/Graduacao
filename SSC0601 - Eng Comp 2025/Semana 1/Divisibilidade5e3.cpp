/* Escreva um programa que leia um número inteiro e verifique se ele é divisível por 5, por 3, ou por ambos. 
O programa deve exibir a mensagem correspondente: "Divisivel por 5", "Divisivel por 3", "Divisivel por 5 e 3", caso o número seja divisível por ambos e "Nao e divisivel por 3 nem por 5" caso não seja divisível. */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int numero;
    cin >> numero;

    if (numero%3==0 && numero%5==0){
        cout << "Divisivel por 5 e 3";
    } else if (numero%3==0 && numero%5!=0){
        cout << "Divisivel por 3";
    } else if (numero%3!=0 && numero%5==0){
        cout << "Divisivel por 5";
    } else {
        cout << "Nao e divisivel por 3 nem por 5";
    }
}
