/*O programa deve calcular a raiz quadrada de um número. Se o número informado for negativo, o programa deve exibir a mensagem de erro: "Numero negativo, nao e possivel calcular a raiz quadrada". Caso contrário, deve calcular e exibir o valor da raiz quadrada com 2 casas decimais.
Entrada:
    Um número real, representando o número do qual se deseja calcular a raiz quadrada.

Saída:
    Se o número for negativo: "Numero negativo, nao e possivel calcular a raiz quadrada".
    Caso contrário, exibir a raiz quadrada com 2 casas decimais.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
  float num;
  cin >> num;

  if(num < 0){
    cout << "Numero negativo, nao e possivel calcular a raiz quadrada";
  } else {
      double raiz = pow(num, 0.5);
      std::cout << std::fixed << std::setprecision(2) << raiz;
    }

}