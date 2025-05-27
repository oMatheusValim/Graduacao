#include "avaliador.h"
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string fileName;
    cin >> fileName;
    
    ifstream file(fileName);
    ofstream new_file("notas_convertido.csv");

    string linha;
    bool linha1 = true;
    while(getline(file, linha)){
        if (!linha1){
            new_file << "\n";
        }
        linha1 = false;

        replace(linha.begin(), linha.end(), ',', ';');
        replace(linha.begin(), linha.end(), '.', ',');
        
        new_file << linha;
    }
    file.close();
    new_file.close();
    arquivo_finalizado("notas_convertido.csv");
}