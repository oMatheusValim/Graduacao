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