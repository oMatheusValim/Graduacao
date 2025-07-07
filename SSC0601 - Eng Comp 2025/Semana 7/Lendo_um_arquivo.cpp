/*Escreva um programa em C que leia o conteúdo de um arquivo texto com três linhas e imprima cada linha na saída padrão, uma por vez, mantendo a mesma ordem.

Entrada: O nome do arquivo a ser lido (por exemplo, dados.txt). O nome será fornecido pela entrada padrão (stdin).

Saída esperada: As três linhas contidas no arquivo, uma por linha.*/
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename;
    std::string line1, line2, line3;

    std::cin >> filename;

    std::ifstream inputFile(filename);

    std::getline(inputFile, line1);
    std::getline(inputFile, line2);
    std::getline(inputFile, line3);

    std::cout << line1 << std::endl;
    std::cout << line2 << std::endl;
    std::cout << line3 << std::endl;

    inputFile.close();

    return 0;
}