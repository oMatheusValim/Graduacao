/*Você deve implementar uma calculadora avançada que suporta dois modos de operação: Normal e Científico. O programa recebe uma sequência de comandos compactos que especificam o modo e a operação a ser realizada. Para cada operação, o programa deve calcular e imprimir o resultado.
Modos e Operações

    Modo Normal (1)
        1 1 A B → Soma (A + B)
        1 2 A B → Subtração (A - B)
        1 3 A B → Multiplicação (A × B)
        1 4 A B → Divisão (A / B) (B ≠ 0) 

    Modo Científico (2)

        2 1 A B → Potência (A^B)

        2 2 A → Raiz quadrada (√A) (A ≥ 0)

        2 3 A → Logaritmo natural (ln A) (A > 0) 

A leitura termina quando for lida uma linha em que o modo seja 0.*/
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    int modo, operacao;
    float A, B, result;
    vector<string> listaResult; 

    while (true) {
        cin >> modo;

        switch (modo) {
            case 1: 
                cin >> operacao >> A >> B;
                
                if (operacao == 1) {
                    result = A + B;
                } else if (operacao == 2) {
                    result = A - B;
                } else if (operacao == 3) {
                    result = A * B;
                } else if (operacao == 4) {
                    if (B == 0) {
                        listaResult.push_back("Erro");
                        break;
                    } else {
                        result = A / B;
                    }
                }

                {
                    stringstream ss;
                    ss << fixed << setprecision(2) << result;
                    listaResult.push_back(ss.str());
                }
                break;

            case 2: 
                cin >> operacao >> A;
                if (operacao == 1) { 
                    cin >> B;
                    result = pow(A, B);
                } else if (operacao == 2) {
                    if (A < 0) {
                        listaResult.push_back("Erro");
                        break;
                    } else {
                        result = sqrt(A);
                    }
                } else { 
                    if (A <= 0) {
                        listaResult.push_back("Erro");
                        break;
                    } else {
                        result = log(A);
                    }
                }

                if (listaResult.empty() || listaResult.back() != "Erro") {
                    stringstream ss;
                    ss << fixed << setprecision(2) << result;
                    listaResult.push_back(ss.str());
                }
                break;

            default: 
                for (const auto& res : listaResult) {
                    cout << res << endl;
                }
                return 0;
        }
    }
}


