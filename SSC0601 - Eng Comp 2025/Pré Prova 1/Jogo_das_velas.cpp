/*Em um jogo, há N velas inicialmente acesas. A cada rodada, o jogador escolhe um número inteiro K, que é divisor do número atual de velas acesas, e apaga exatamente K velas. O jogo continua até que não seja possível apagar velas (ou seja, só resta 1 vela).

Dado um número inicial de velas acesas, determine em quantas rodadas o jogador conseguirá finalizar o jogo escolhendo sempre o maior divisor possível diferente do próprio número de velas acesas.
Entrada:

    Um único inteiro N (2 ≤ N ≤ 10⁵), indicando o número inicial de velas acesas.

Saída:

    Um inteiro, indicando o número total de rodadas até restar apenas 1 vela.

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int Nvelas;
    cin >> Nvelas;

    int cont = 0, K;

    while (Nvelas != 1) {
        for (int i = Nvelas-1; i > 0; i--) {
            if (Nvelas % i == 0) {
                K = i;
                break; 
            }
        }
        Nvelas -= K;
        cont++;
        
    }

    cout << cont;
    return 0;
}