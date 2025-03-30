#include <bits/stdc++.h>
using namespace std;

int main(){
    float n1, n2, result;
    char simb;

    cin >> n1 >> n2 >> simb;

    switch(simb){
    case '+': result = n1+n2; cout << result; break;
    case '-': result = n1-n2; cout << result; break;
    case '*': result = n1*n2; cout << result; break;
    case '/':
        if(n2 == 0){
            cout<< "Erro: divisao por zero"; break;
        } else{
            result = n1/n2; std::cout << std::fixed << setprecision(2) << result; break;
        }
    default: cout<< "Erro: operacao invalida"; break;
    }
}
