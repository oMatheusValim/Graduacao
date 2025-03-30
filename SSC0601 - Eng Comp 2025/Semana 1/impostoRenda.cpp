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