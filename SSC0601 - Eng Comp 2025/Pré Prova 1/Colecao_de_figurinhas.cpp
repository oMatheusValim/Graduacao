/*Lucas e Sofia colecionam figurinhas numeradas de 1 até 1000. Lucas possui algumas repetidas e Sofia está precisando completar sua coleção. Escreva um programa que determine quantas figurinhas diferentes Lucas pode fornecer a Sofia.
Entrada:

    A primeira linha contém dois inteiros separados por espaço:
    N (o número total de figurinhas de Lucas) e
    M (o número de figurinhas de Sofia).
    A segunda linha contém N inteiros representando os números das figurinhas de Lucas.
    A terceira linha contém M inteiros representando os números das figurinhas de Sofia.

Saída:

Uma única linha contendo um inteiro: o número máximo de figurinhas diferentes que Lucas pode fornecer para Sofia.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int numLucas, numSofia;
    cin >> numLucas >> numSofia;

    unordered_set<int> lucas;
    unordered_set<int> sofia;

    for (int i = 0; i < numLucas; i++) {
        int valor;
        cin >> valor;
        lucas.insert(valor);
    }

    for (int i = 0; i < numSofia; i++) {
        int valor;
        cin >> valor;
        sofia.insert(valor);
    }

    int cont = 0;
    for (int fig : lucas) {
        if (sofia.find(fig) == sofia.end()) {
            cont++;
        }
    }

    cout << cont;
    return 0;
}