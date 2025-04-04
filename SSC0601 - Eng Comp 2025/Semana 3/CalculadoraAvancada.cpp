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


