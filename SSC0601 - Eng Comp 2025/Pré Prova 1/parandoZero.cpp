/*Escreva um programa que leia números inteiros até encontrar o número zero. Para cada número lido (exceto o zero), imprima "Recebido: X", onde X é o número. Quando encontrar o número zero, o programa deve parar imediatamente sem imprimir nada após ele.
Entrada

    Uma sequência de números inteiros X₁, X₂, ..., Xₙ (-10⁴ ≤ Xᵢ ≤ 10⁴), um por linha, terminando com o número zero. O número de elementos pode chegar até 1000.

Saída

    Para cada número diferente de zero, imprima a mensagem "Recebido: X".
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int valor;

    while(true){
        cin >> valor;
        if (valor == 0){
            break;
        } else{
            cout << "Recebido: " << valor << endl;
        }
    }
    return 0;
}
