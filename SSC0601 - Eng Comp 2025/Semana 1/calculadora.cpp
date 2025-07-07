/*O programa deve dois números inteiros e uma operação matemática (+, -, *, /). Em seguida, deve exibir o resultado da operação escolhida. Caso o usuário escolha uma operação inválida, deve exibir a mensagem de erro. As mensagens de erro são: "Erro: divisao por zero" - Quando ocorre uma divisão por zero "Erro: operacao invalida" - Quando um operador inválido é escolhido (que não seja +, -, * ou / ). Utilize printf("%.2f) para limitar apenas 2 casas decimais quando for uma operação de / . As demais operações são inteiras e não precisam exibir casas decimais.*/
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
