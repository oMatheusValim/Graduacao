/*Você recebeu um arquivo chamado notas.csv, com o seguinte conteúdo de exemplo:

Nome,Nota1,Nota2,Nota3
Ana,8.5,7.0,9.0
Joao,6.0,5.5,7.0
Carlos,4.0,3.5,6.5

Escreva um programa em C que:

    Leia o conteúdo do arquivo notas.csv.

    Substitua:
        Todo ponto (.) por vírgula (,) – adaptando o separador decimal ao formato brasileiro.
        Toda vírgula (,) que não fizer parte de um número decimal, por ponto e vírgula (;) – adaptando os separadores de coluna.

    Grave o conteúdo resultante no arquivo notas_convertido.csv.

Entrada

Seu programa deverá ler da entrada padrão o nome do arquivo de entrada (por exemplo: notas.csv). O arquivo estará disponível no mesmo diretório da execução.
Saída

Seu programa não deve imprimir nada na tela.

O resultado será validado automaticamente com base no conteúdo do arquivo notas_convertido.csv que você gerar.*/
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