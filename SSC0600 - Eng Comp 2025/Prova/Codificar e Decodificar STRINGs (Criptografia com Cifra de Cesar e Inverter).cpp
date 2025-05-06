#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Matheus Valim Nogueira, 15746323
using namespace std;

int main() {
    string linha;

    while (true) {
        getline(cin, linha);

        linha.erase(remove_if(linha.begin(), linha.end(), [](char c) {
            return isspace(c);
        }), linha.end());

        if (linha.empty()) continue;

        char comando = linha[0];

        if (comando == 'F') break;

        string palavra;
        getline(cin, palavra);


        size_t first = palavra.find_first_not_of(" \t\r\n");
        size_t last = palavra.find_last_not_of(" \t\r\n");
        if (first == string::npos || last == string::npos) continue;
        palavra = palavra.substr(first, last - first + 1);

        vector<char> resultado;


        if (comando == 'C') {
            for (char c : palavra) {
                if (c == ' ') resultado.push_back('!');
                else resultado.push_back(c + 1);
            }
        } else if (comando == 'D') {
            for (char c : palavra) {
                if (c == '!') resultado.push_back(' ');
                else resultado.push_back(c - 1);
            }
        } else {
            cout << "Comando inválido: " << comando << endl;
            continue;
        }

        for (char c : resultado) cout << c;
        cout << endl;


        for (int i = resultado.size() - 1; i >= 0; --i) {
            if (i > 0 && resultado[i] == ' ' && resultado[i - 1] == ' ') {
                cout << "!";
                --i;
            } else {
                cout << resultado[i];
            }
        }
        cout << endl;
    }

    return 0;
}
