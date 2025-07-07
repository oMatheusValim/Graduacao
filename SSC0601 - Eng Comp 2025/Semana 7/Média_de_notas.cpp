/*Escreva um programa em C que leia um arquivo CSV contendo os nomes de alunos e suas três notas, calcule a média das notas de cada aluno e imprima, para cada um, seu nome e a média com uma casa decimal.
Entrada

A entrada do programa é consistirá de uma única linha com o nome do arquivo CSV a ser processado. Exemplo:

notas.csv

Este arquivo estará disponível no mesmo diretório do programa e conterá linhas no seguinte formato:

Nome,Nota1,Nota2,Nota3
Ana,8.5,7.0,9.0
João,6.0,5.5,7.0

A primeira linha é um cabeçalho e deve ser ignorada.
Saída esperada

O programa deve imprimir na saída padrão, para cada aluno, seu nome e a média das três notas com uma casa decimal. Exemplo para o arquivo acima:

Ana 8.2
João 6.2
*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

int main(){
    std::string fileName;
    std::cin >> fileName;

    std::ifstream inputFile(fileName);
    std::string linha;

    std::getline(inputFile, linha);

    while(std::getline(inputFile, linha)){
        float nota1, nota2, nota3;
        std::string nome;
        std::istringstream iss(linha);
        char virgula;

        if(std::getline(iss, nome, ',') && iss >> nota1 >> virgula >> nota2 >> virgula >> nota3){
            float media = (nota1 + nota2 + nota3) / 3;
            std::cout << nome << " " <<std::fixed << std::setprecision(1)<< media << std::endl;
        }

    }    
}