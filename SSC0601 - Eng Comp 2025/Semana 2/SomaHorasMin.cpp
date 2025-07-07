/*Leia duas durações no formato "HH:MM" e exiba a soma delas no mesmo formato.

Entrada:

    Duas linhas, cada uma contendo uma duração no formato "HH:MM".

Saída:

    A soma das duas durações, ajustando corretamente as horas e minutos.
*/
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    int h1, h2, m1, m2;
    std::scanf("%d:%d", &h1, &m1);
    std::scanf("%d:%d", &h2, &m2);

    int hf = h1 + h2;
    int mf = m1 + m2;

    if (mf >= 60){
        hf++;
        mf -= 60;
    }
    if (hf > 23){
        hf -= 24;
    }

    cout << setfill('0') << setw(2) << hf << ":" << setfill('0') << setw(2) << mf << endl;
}