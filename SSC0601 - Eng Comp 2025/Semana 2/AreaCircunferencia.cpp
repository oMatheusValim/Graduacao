/*Leia o raio de uma circunferência e calcule sua área usando a fórmula:

A = pi * r²

Exiba o resultado em notação científica com 4 casas decimais.

Entrada:

    Um número real r representando o raio da circunferência.

Saída:

    A área em notação científica com 4 casas decimais.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float raio;
    cin >> raio;

    double pi = 2 * acos(0.0);
    float area = pow(raio, 2) * pi;

    printf("%.4e", area);
}