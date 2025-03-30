#include <bits/stdc++.h>
using namespace std;

int main(){
    string cpf;
    cin >> cpf;

    string novoCPF = cpf.substr(0,3) + "." + cpf.substr(3, 3) + "." + cpf.substr(6,3) + "-" + cpf.substr(9,2);
    cout << novoCPF;
}