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