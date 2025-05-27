#include "avaliador.h"
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> 
#include <cctype>    
using namespace std;

string paraMinusculas(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main(){
    string fileInpName, fileOutName, palavra;
    cin >> fileInpName >> fileOutName >> palavra;

    ifstream file1(fileInpName);
    ofstream file2(fileOutName);

    string linha;
    string palavraMinuscula = paraMinusculas(palavra); 

    while(getline(file1, linha)){
        string linhaMinuscula = paraMinusculas(linha); 
        if(linhaMinuscula.find(palavraMinuscula) != string::npos){
            file2 << linha << endl;
        }
    }
    file1.close();
    file2.close();
    arquivo_finalizado("saida.txt");
    return 0;
}