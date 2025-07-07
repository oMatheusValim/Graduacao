/*Um professor deseja calcular a nota final de um aluno em uma disciplina. A nota final é determinada pela média ponderada das notas de três provas. As notas têm os seguintes pesos:

    Primeira prova: peso 3
    Segunda prova: peso 5
    Terceira prova: peso 2

Baseado na média ponderada, a classificação final será atribuída da seguinte forma:

    Se a média for maior ou igual a 7.0, o aluno é Aprovado.
    Se a média for entre 4.0 (inclusive) e 6.9 (inclusive), o aluno é Exame.
    Se a média for menor que 4.0, o aluno é Reprovado.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float p1, p2, p3;
    cin >> p1 >> p2 >> p3;

    float notaFinal = (p1*3 + p2*5 + p3*2) / 10;

    if (notaFinal >= 7){
        cout << "Aprovado";
    } else if (4 <= notaFinal && notaFinal < 7){
        cout << "Exame";
    } else{
        cout << "Reprovado";
    }
}
