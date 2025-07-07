/*Dado um número inteiro positivo Exp, desenhe uma "seta" composta por asteriscos (*). A linha central da seta deve conter exatamente n asteriscos, separados por tabulações (\t). As linhas acima e abaixo dessa linha devem conter, respectivamente, n-1, n-2, ..., até 1 asterisco, também separados por tabulação.

A seta é simétrica verticalmente em relação à linha central.
Entrada

Um único número inteiro n (1<= n <= 100), representando o número de asteriscos na linha central da seta.
Saída

Imprima 2n-1 linhas, formando a figura de uma seta com a linha central contendo n asteriscos separados por tabulações (\t). As demais linhas devem conter n-1, n-2, ..., até 1 asterisco, seguindo o mesmo padrão.*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int e=1; e<=n; e++){
        int r1=0;
        while(r1 < e){
            cout << "*\t";
            r1++;
        }
        cout << endl;
    }
    for(int e=n-1; e >= 1; e--){
        int r2=0;
        while(r2 < e){
            cout << "*\t";
            r2++;
        }
        cout << endl;
    }
}