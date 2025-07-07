/*O programa deve calcular o número de raízes de uma equação de segundo grau da forma ax² + bx + c = 0, onde os coeficientes a, b e c são fornecidos e sempre diferentes de zero. O programa deve calcular o discriminante Delta = b² - 4ac e determinar o número de raízes reais. O programa deve exibir:

    "Duas raizes reais" se Delta > 0,
    "Uma raiz real" se Delta = 0,
    "Nenhuma raiz real" se Delta < 0.

Entrada:

    Três números reais, representando os coeficientes a, b e c.

Saída:

    O número de raízes reais da equação.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float a, b, c;
    cin >> a >> b >> c;

    float delta = pow(b, 2) - 4 * a *c;
    
    if (delta > 0){
        cout << "Duas raizes reais";
    } else if (delta == 0){
        cout << "Uma raiz real";
    } else{
        cout << "Nenhuma raiz real";
    }
}