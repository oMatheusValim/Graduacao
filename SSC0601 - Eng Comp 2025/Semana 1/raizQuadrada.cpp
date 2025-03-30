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