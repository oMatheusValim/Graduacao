/*Dado quatro lados de um quadrilátero, determine se é possível formar um quadrilátero. O quadrilátero pode ser:

    Retângulo se um par de lados opostos forem iguais e o outro par também for igual.
    Losango se todos os lados forem iguais.
    Trapézio se houver um par de lados paralelos (dado que o problema não especifica, pode-se assumir que se dois lados forem iguais, eles são paralelos).
    Irregular se as condições acima não forem atendidas.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int l1, l2, l3, l4;
    cin >> l1 >> l2 >> l3 >> l4;

    if (l1 == l2 && l2 == l3 && l3 == l4){
        cout << "Losango";
    } else if(l1 == l2 && l3 == l4 || l2 == l3 && l1 == l4 || l2 == l4 && l1 == l3){
        cout << "Retangulo";
    } else if (l1 == l2 || l2 == l3 || l3==l4 || l1 == l3 || l1==l4 || l2 ==l4){
        cout << "Trapezio";
    } else {
        cout << "Irregular";
    }
}
