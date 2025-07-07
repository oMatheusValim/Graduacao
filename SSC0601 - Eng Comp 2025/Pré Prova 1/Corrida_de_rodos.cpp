/*Dois robôs competem numa pista retilínea. Cada robô executa uma sequência de comandos:

    A (andar): tenta avançar uma casa.
        Se houver espaço livre (.), ele avança normalmente.
        Se houver obstáculo (#), ele não avança e fica parado.

    P (pular): tenta ultrapassar um obstáculo.

        Se houver obstáculo (#) na casa seguinte, o robô pula e avança uma casa.

        Se houver espaço livre (.) na casa seguinte, o robô não avança e permanece parado.

Os dois robôs começam na posição 0, e a pista tem N casas (posições de 0 até N−1).
O objetivo é determinar qual robô chega mais longe sem bater em obstáculos nem sair da pista. Cada comando é processado na ordem recebida, e o robô para de executar seus comandos caso tente andar para fora da pista.
Entrada

    A primeira linha contém um inteiro N (1 ≤ N ≤ 1000), o tamanho da pista.
    A segunda linha contém uma string de N caracteres representando a pista:
        . indica espaço livre;
        # indica obstáculo.
    As duas próximas linhas contêm strings representando as sequências de comandos dos robôs, cada uma com até 1000 comandos (A ou P).

Saída

Imprima:

    1 se o robô 1 chegou mais longe,
    2 se o robô 2 chegou mais longe,
    0 em caso de empate.
*/
#include <iostream>
#include <string>

using namespace std;

int simulateRobot(const string& track, const string& commands) {
    int position = -1;
    int n = track.length();
    for (char cmd : commands) {
        if (cmd == 'A') {
            int next_pos = position + 1;
            if (next_pos < n) {
                if (track[next_pos] == '.') {
                    position = next_pos;
                }
            } else {
                break;
            }
        } else if (cmd == 'P') {
            int next_pos = position + 1;
            if (next_pos < n) {
                if (track[next_pos] == '#') {
                    position = next_pos;
                }
            } else {
                break;
            }
        }
    }
    return position;
}

int main() {
    int n;
    cin >> n;
    string track;
    cin >> track;
    string commands_robot1, commands_robot2;
    cin >> commands_robot1 >> commands_robot2;

    int pos1 = simulateRobot(track, commands_robot1);
    int pos2 = simulateRobot(track, commands_robot2);

    if (pos1 > pos2) {
        cout << 1 << endl;
    } else if (pos2 > pos1) {
        cout << 2 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}