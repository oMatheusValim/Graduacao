/*Dado dois inteiros positivos N e P, calcule o valor do somatório definido pela seguinte fórmula:

S = \sum_{i=1}^{N} \sqrt( \frac {P+i} {i})

Seu programa deve calcular o valor de S com precisão de 6 casas decimais após o ponto decimal.
Entrada

A entrada consiste de uma única linha com dois inteiros:

N P

    1 <= N <= 10⁶
    1 <= P <= 10⁶

Saída

Imprima uma única linha contendo o valor do somatório ( S ), com exatamente 6 casas decimais.*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p;
    cin >> n >> p;

    long double soma = 0.0;
    for(int i=1; i<=n; i++){
        soma += sqrt(p+i) / sqrt(i);
    }
    cout << fixed << setprecision(6) << soma;
}