/*Leia um CPF no formato "XXXXXXXXXYY" (sem separadores) e exiba-o formatado como "XXX.XXX.XXX-YY".
(Utilize resto e divisão para extrair os dígitos, ou string caso você já saiba utilizar) Entrada:

    Uma sequência de 11 dígitos numéricos.

Saída:

    O CPF formatado corretamente.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    string cpf;
    cin >> cpf;

    string novoCPF = cpf.substr(0,3) + "." + cpf.substr(3, 3) + "." + cpf.substr(6,3) + "-" + cpf.substr(9,2);
    cout << novoCPF;
}