/*Escreva um programa em C que receba uma string do usuário (sem espaços) e salve seu conteúdo em um arquivo chamado mensagem.txt.
Entrada
Uma string com até 100 caracteres sem espaços.

Arquivo mensagem.txt (esperado)
Deve conter exatamente a string informada pelo usuário, sem alterações ou quebras de linha adicionais*/
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