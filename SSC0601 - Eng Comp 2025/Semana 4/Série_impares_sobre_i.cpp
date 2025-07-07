/*Dada a seguinte série matemática:

S = 1/1 + 3/2 + 5/3 + 7/4 ...

onde o numerador segue a sequência dos números ímpares 1, 3, 5, 7) e o denominador segue a sequência dos números naturais 1, 2, 3, 4), escreva um programa que calcule o valor de Exp considerando os primeiros Exp termos da série.
Entrada

Um único número inteiro positivo N (1 <= N <= 10⁵), representando a quantidade de termos da série a serem somados.
Saída

O programa deve imprimir um único número decimal representando o valor da soma da série com 6 casas decimais de precisão. */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int nTermos, numerador=1, denominador=1;
    double resultado=0;
    cin >> nTermos;

    while(nTermos >= denominador){
        resultado += (double)numerador/denominador;
        numerador += 2;
        denominador++;
    }
    std::cout << std::fixed << std::setprecision(6) <<  resultado;
}