/*Um robô começa em uma posição (0, 0) em um plano cartesiano e pode se deslocar nas quatro direções principais: norte, sul, leste e oeste. O robô recebe uma sequência de comandos para se mover. Cada comando é uma letra representando uma direção de movimento:

    N para norte (aumenta o valor de Y),
    S para sul (diminui o valor de Y),
    L para leste (aumenta o valor de X),
    O para oeste (diminui o valor de X).

Dado um número de comandos e a sequência de direções, determine a posição final do robô.*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int numComandos;
    cin >> numComandos;

    int x=0, y=0;
    char dire;

    for (int i = 0; i < numComandos ; i++){
        cin >> dire;

        if (dire == 'S'){
            y--;
        } else if(dire == 'N'){
            y++;
        } else if(dire == 'L'){
            x++;
        } else{
            x--;
        }
    }
    cout << x << " " << y;
}

// pode subir
