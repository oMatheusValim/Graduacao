#include <iostream>
#include <fstream>
#include <string>
#include "avaliador.h"
using namespace std;

int main(){
    string palavra;
    cin >> palavra;

    ofstream outputFile("mensagem.txt");

    if(outputFile.is_open()){
        outputFile << palavra;
        outputFile.close();
    }
    arquivo_finalizado("mensagem.txt");
}