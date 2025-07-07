/*Escreva um programa em C que receba dois nomes de arquivos e uma palavra como entrada:

    O primeiro nome corresponde ao arquivo de entrada (texto original);
    O segundo nome corresponde ao arquivo de saida (texto filtrado);
    A palavra e o criterio de filtro.

O programa deve copiar para o arquivo de saida apenas as linhas do arquivo de entrada que contiverem a palavra fornecida. A busca deve considerar ocorrencia como substring (nao diferenciar maiusculas de minusculas e nao exige correspondencia exata da palavra, apenas se ela estiver contida na linha).
Entrada

Tres strings (na mesma linha, separadas por espaco), indicando:

nome_arquivo_entrada nome_arquivo_saida palavra

Saida esperada (na saida padrao)

Nada. Todo o resultado sera escrito no arquivo de saida.*/
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