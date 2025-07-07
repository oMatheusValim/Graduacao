/*Você tem um conjunto de N blocos com alturas variadas e deseja construir a torre mais alta possível. Para garantir que a torre não caia, o bloco colocado acima deve sempre ter altura menor ou igual ao bloco imediatamente abaixo.

Dado o conjunto de alturas dos blocos, escreva um programa para determinar qual a altura máxima possível da torre que pode ser construída usando os blocos disponíveis.
Entrada:

    A primeira linha contém um inteiro N (1 ≤ N ≤ 10⁴), indicando o número de blocos disponíveis.
    A segunda linha contém N inteiros separados por espaço, indicando as alturas dos blocos (cada altura entre 1 e 10⁴).

Saída:

    Uma linha contendo um inteiro indicando a altura máxima possível da torre construída com os blocos disponíveis.
*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int numBlocos, soma=0;
    cin >> numBlocos;

    vector<int> alturas;
    for(int a=0; a<numBlocos; a++){
        int valor;
        cin >> valor;
        alturas.push_back(valor);
    }

    for(int v : alturas){
        soma += v;
    }
    cout << soma;
}
