/*Leia um número inteiro positivo e imprima-o em decimal, octal e hexadecimal.

Entrada:

    Um número inteiro positivo ( N ).

Saída:

    O número impresso nas três bases, conforme o formato:
    Decimal: X Octal: Y Hexadecimal: Z
*/
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    unsigned int numero;
    cin >> numero;

    cout << "Decimal: " << numero << endl;
    cout << "Octal: " << oct << numero << endl;
    cout << "Hexadecimal: " << hex << uppercase << numero; 
}