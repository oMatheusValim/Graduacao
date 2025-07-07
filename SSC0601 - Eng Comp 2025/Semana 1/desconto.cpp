/*O programa deve ler o valor de uma compra e calcular um desconto de 10% caso o valor da compra seja superior a R$ 100,00. Caso contrário, o valor da compra deve permanecer inalterado. Exiba o valor final da compra. Dica, utilize printf("%.2f\n") para limitar em 2 casas decimais os números impressos no terminal.*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float valor;

    cin >> valor;

    if (valor > 100){
        valor = valor*0.9;
    }
    std::cout << std::fixed << std::setprecision(2) << valor;
}
