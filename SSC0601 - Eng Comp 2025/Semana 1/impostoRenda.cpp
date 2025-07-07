/*O programa deve calcular o imposto de renda a ser pago com base no salário bruto de um funcionário, de acordo com a tabela progressiva de impostos a seguir:

    Até R$ 1.500,00: Isento
    De R$ 1.501,00 a R$ 2.500,00: 10%
    De R$ 2.501,00 a R$ 3.500,00: 15%
    Acima de R$ 3.500,00: 20%
    Após calcular o imposto, o programa também deve calcular o salário líquido (salário bruto menos o imposto) e exibir ambos.

Entrada:

    Um número real representando o salário bruto do funcionário.

Saída:

    O valor do imposto de renda a ser pago e o salário líquido (com duas casas decimais).
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    double salario;
    cin >> salario;

    if (salario <= 1500){
        cout << "Imposto a pagar: 0.00" << endl;
        std::cout << std::fixed << "Salario liquido: " << std::setprecision(2) << salario; 
    } else if (1501 <= salario && salario <= 2500){
        float imposto = salario*0.1;
        float salarioFim = salario - imposto;
        std::cout << std::fixed << "Imposto a pagar: " << std::setprecision(2) << imposto << endl;  
        std::cout << std::fixed << "Salario liquido: " << std::setprecision(2) << salarioFim;   
    } else if (2501 <= salario && salario <= 3500){
        float imposto = salario*0.15;
        float salarioFim = salario - imposto;
        std::cout << std::fixed << "Imposto a pagar: " << std::setprecision(2) << imposto << endl;  
        std::cout << std::fixed << "Salario liquido: " << std::setprecision(2) << salarioFim;   
    } else{
        float imposto = salario*0.2;
        float salarioFim = salario - imposto;
        std::cout << std::fixed << "Imposto a pagar: " << std::setprecision(2) << imposto << endl;  
        std::cout << std::fixed << "Salario liquido: " << std::setprecision(2) << salarioFim;   

    }
} 