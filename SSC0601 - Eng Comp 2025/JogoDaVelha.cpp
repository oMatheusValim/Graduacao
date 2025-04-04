#include <iostream>
#include <array>

using namespace std;

void imprimirTabuleiro(const array<int, 9>& tabuleiro) {
    for (int i = 0; i < 9; i++) {
        cout << tabuleiro[i] << " ";
        if (i % 3 == 2) cout << "\n";
    }
}

int main() {
    int P1, P2, P3, P4, P5, P6, P7, P8, P9, jogada;
    cin >> P1 >> P2 >> P3 >> P4 >> P5 >> P6 >> P7 >> P8 >> P9 >> jogada;

    array<int, 9> tabuleiro = {P1, P2, P3, P4, P5, P6, P7, P8, P9};

    if (jogada < 1 || jogada > 9) {
        cout << "Jogada Invalida\n";
        imprimirTabuleiro(tabuleiro);
        return 0;
    }

    int pos = jogada - 1; 

    if (tabuleiro[pos] != 0) {
        cout << "Jogada Invalida\n";
        imprimirTabuleiro(tabuleiro);
        return 0;
    }

    tabuleiro[pos] = 1;
    cout << "Jogada Valida\n";

    bool vitoria = false;
    
    for (int i = 0; i < 9; i += 3) {
        if (tabuleiro[i] == 1 && tabuleiro[i+1] == 1 && tabuleiro[i+2] == 1) {
            vitoria = true;
        }
    }
    
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i] == 1 && tabuleiro[i+3] == 1 && tabuleiro[i+6] == 1) {
            vitoria = true;
        }
    }

    if ((tabuleiro[0] == 1 && tabuleiro[4] == 1 && tabuleiro[8] == 1) ||
        (tabuleiro[2] == 1 && tabuleiro[4] == 1 && tabuleiro[6] == 1)) {
        vitoria = true;
    }

    if (vitoria) {
        cout << "Jogador 1 venceu!\n";
        imprimirTabuleiro(tabuleiro); 
        return 0;
    }

    bool empate = true;
    for (int i = 0; i < 9; i++) {
        if (tabuleiro[i] == 0) {
            empate = false;
            break;
        }
    }

    if (empate) {
        cout << "Empate!\n";
        imprimirTabuleiro(tabuleiro);
        return 0;
    }

    cout << "Jogador 2 joga agora!\n";
    imprimirTabuleiro(tabuleiro); 

    return 0;
}

// pode subir mas é avaliação
