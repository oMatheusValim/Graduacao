/*Você deve implementar uma função que determina a categoria de idade de uma pessoa com base na sua idade fornecida como entrada. As categorias são as seguintes:

    "Bebe": de 0 a 2 anos.
    "Crianca": de 3 a 12 anos.
    "Adolescente": de 13 a 17 anos.
    "Adulto": de 18 a 64 anos.
    "Idoso": 65 anos ou mais.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int idade;
    cin >> idade;

    if (0 <= idade && idade <= 2){
        cout << "Bebe";
    } else if (3 <= idade && idade <= 12){
        cout << "Crianca";
    } else if (13 <= idade && idade <= 17){
        cout << "Adolescente";
    } else if(18 <= idade && idade <= 64){
        cout << "Adulto";
    } else{
        cout << "Idoso";
    }
}