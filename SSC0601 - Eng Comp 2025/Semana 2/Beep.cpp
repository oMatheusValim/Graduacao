/*Leia um número inteiro N. Caso seja maior que 1000, imprima "ALERTA!" e toque um beep.

Entrada:

    Um número inteiro N.

Saída:

    Caso seja maior que 1000, imprima "ALERTA!" e o beep.
    Caso contrário, apenas imprima "OK".
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    if (num > 1000){
        std::printf("ALERTA!\a\n");
    } else {
        cout << "OK\n";
    }
}