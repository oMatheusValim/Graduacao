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