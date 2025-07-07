/*O programa deve ler os três lados de um triângulo e verificar se os lados informados podem formar um triângulo válido. Para isso, a soma de dois lados deve ser maior que o terceiro. O programa deve exibir "Triangulo Valido" ou "Triangulo Invalido", dependendo do resultado.*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;

    if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1){
        cout << "Triangulo Valido";
    } else{
        cout << "Triangulo Invalido";
    }
}
