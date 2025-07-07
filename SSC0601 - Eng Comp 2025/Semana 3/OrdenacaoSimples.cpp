/*Dado três números inteiros distintos, sua tarefa é escrevê-los em ordem crescente. */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    if (A==B || B == C){
        cout << "Erro: os numeros devem ser distintos.";
    } else{
        int memo;
        if (A > B){
            memo = A;
            A = B;
            B = memo;
        }
        if (B > C){
            memo = B;
            B = C;
            C = memo;
        }
        if (A > B){
            memo = A;
            A = B;
            B = memo;
        }
        cout << A << " " << B << " " << C;
    }
}