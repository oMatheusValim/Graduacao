#include "avaliador.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string fileName;
    cin >> fileName;

    fileName.erase(fileName.find_last_not_of("\r\n") + 1);

    ifstream file_count(fileName);
    int total_lines = 0;
    string temp_line;
    while (getline(file_count, temp_line)) {
        total_lines++;
    }
    file_count.close();

    ifstream file(fileName);
    ofstream new_file("poema_numerado.txt");

    string linha;
    int cont = 1;
    int width = (total_lines > 999) ? 4 : 3; 

    while (getline(file, linha)) {
        new_file << setw(width) << setfill('0') << cont << ": " << linha << endl;
        cont++;
    }

    file.close();
    new_file.close();

    arquivo_finalizado("poema_numerado.txt");
    return 0;
}