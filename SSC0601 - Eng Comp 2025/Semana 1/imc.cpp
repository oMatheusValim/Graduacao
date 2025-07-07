/*O programa deve calcular o Índice de Massa Corporal (IMC) de uma pessoa a partir do peso e altura fornecidos. O IMC é calculado pela fórmula: IMC = peso/altura²

Após calcular o IMC, o programa deve classificar o valor do IMC nas seguintes categorias:
    Abaixo de 18.5: Abaixo do peso
    De 18.5 a 24.99..: Peso normal
    De 25 a 29.999...: Sobrepeso
    De 30 ou mais: Obesidade
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float altura, peso;

    cin >> peso >> altura;

    float imc = peso/(altura*altura);

    if (18.5 > imc){
        cout << "Abaixo do peso";
    } else if (18.5 <= imc && imc < 24.99){
        cout << "Peso normal"; 
    } else if (25 <= imc && imc < 29.99){
        cout << "Sobrepeso";
    } else{
        cout << "Obesidade";
    }
} 