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