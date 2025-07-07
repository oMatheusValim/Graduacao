/*Escreva um programa em C que leia um arquivo texto e conte quantos caracteres ele possui (inclusive quebras de linha, espaços e pontuações).
Entrada

O programa deve receber como entrada o nome do arquivo a ser lido, fornecido pela entrada padrão (stdin). Exemplo:

entrada.txt

Saída esperada

O programa deve imprimir apenas um número inteiro, que representa a quantidade total de caracteres do arquivo. */
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string fileName;
    std::cin >> fileName;

    int numCaracteres = 0; 
    char caracter;

    std::ifstream inputFile(fileName);
    
    while (inputFile.get(caracter)) {
        numCaracteres++;
    }
    
    inputFile.close();
    std::cout << numCaracteres;
    
    return 0;
}