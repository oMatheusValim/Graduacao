/*Dado um número real E e um número inteiro positivo N, calcule a raiz quadrada aproximada de E utilizando o método de Newton por N iterações. A fórmula utilizada para a aproximação é a seguinte:

R_n+1 = \frac {R_n + \frac {E}{R_n}} {2}

com R_1 = \frac {E} {2}.

Sua tarefa é implementar esse processo iterativo e imprimir a aproximação obtida após N iterações.
Entrada

A entrada consiste de uma única linha contendo dois números:

    Um número real E ( 1 <= E <= 10⁹ ) representando o valor cuja raiz quadrada será aproximada.
    Um número inteiro N ( 1<= N <= 1000 ) representando o número de iterações do método de Newton.

Saída

Imprima a aproximação da raiz quadrada de E após N iterações, com 6 casas decimais de precisão.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float E, N;
    cin >> E >> N;

    double result=E/2;
    for(int i=1; i < N; i++){
        result = (result + E/result) / 2;
    }
    std::cout << std::fixed << std::setprecision(6) << result;
}