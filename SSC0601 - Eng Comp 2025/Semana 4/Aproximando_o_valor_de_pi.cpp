/*A constante matemática π pode ser aproximada por meio da seguinte série infinita:

pi = 4 - 4/3 + 4/5 - 4/7 +4/9 ...

Sua tarefa é, dado um número inteiro Exp, calcular uma aproximação de π utilizando os n primeiros termos da série acima.
Entrada

A entrada consiste de uma única linha contendo um número inteiro n (1<= n <= 10⁶), representando o número de termos da série que devem ser usados na aproximação de π.
Saída

Imprima uma única linha contendo a aproximação de π com 6 casas decimais de precisão.*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    int denominador=1;
    vector<double> divisoes;

    long double divi=0;
    for(int i=0; i < n; i++){
        if(i%2!=0){
            divi = - 4.0/denominador;
        } else{
            divi = 4.0/denominador;
        }

        divisoes.push_back(divi);  
        denominador += 2;
    }
    
    long double soma =0;
    for(int j=0; j < divisoes.size(); j++){
        soma += divisoes[j];
    }
    std::cout << std::fixed << std::setprecision(6) << soma;
}