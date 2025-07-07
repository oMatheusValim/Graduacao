/*Este programa deve implementar uma jogada do Jogo da Velha, onde para isso deve:
    1. Ler a situação atual do tabuleiro do jogo representada por 9 números inteiros:
        0 = Posição Vazia no Tabuleiro
        1 = Posição marcada pelo Jogador ´X´ (Jogador 1)
        2 = Posição marcada pelo Jogador ´O´ (Jogador 2)
        
        O tabuleiro é composto por 9 posições:
            P1 P2 P3 Exemplo : 0 2 0 Possível configuração de um jogo
            P4 P5 P6 1 1 2 Este jogo ainda esta em andamento
            P7 P8 P9 0 0 0 Jogadas ‘X’ em P5; ‘O’ em P2; ‘X’ P4, ‘O’ P6
        Armazenando um valor que pode ser 0; 1; 2
        A situação do tabuleiro informada representa uma situação válida de jogo.
        Quem inicia sempre o jogo é o jogador 1 (‘X’). Quem vai jogar é sempre o jogador 1 (‘X’)
        O tabuleiro pode estar vazio (todas posições com zero) ou já terem sido feitas jogadas.

    2. Ler qual a posição que o jogador 1 (‘X’) vai jogar: valor de 1 a 9
    
    3. Validar se a jogada pode ser realizada (só pode jogar em uma posição vazia)
        Escrever na tela:
            Jogada Valida <= Se a jogada pode ser feita e é válida
            Jogada Invalida <= Se a jogada não pode ser feita pois é uma posição inválida (ocupada)
    
    4. Verificar se após a jogada do jogador 1 (‘X’), que acabou de jogar é:
        O vencedor do jogo => Escrever na tela: Jogador 1 venceu!
        O jogo terminou empatado => Escrever na teça: Empate!
        O jogo não ainda acabou => Escrever na tela: Jogador 2 joga agora!

    5. Exibir na tela a situação atual do tabuleiro como no exemplo anterior.
        Por exemplo, se o jogo terminou empatado, exibir na tela:
            Jogada Valida
            Empate!
            2 1 2
            1 1 2
            1 2 1
        Este jogo pode ser o resultado desta Sequência de Movimentos:
            ‘X’ 5; ‘O’ 1; ‘X’ 4; ‘O’ 6; ‘X’ 2; ‘O’ 8; ‘X’ 7; ‘O’ 3; ‘X’ 9*/
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
