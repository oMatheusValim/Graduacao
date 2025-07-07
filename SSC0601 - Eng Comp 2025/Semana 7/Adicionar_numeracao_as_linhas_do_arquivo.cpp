/*Você recebeu um arquivo texto contendo várias linhas de um poema bem-humorado sobre programação em C, como por exemplo:

Conteúdo do arquivo codigo_poetico.txt (o nome pode variar):

No ponteiro esquecido declarei com emoção,  
mas na hora de usar... deu segmentation.  

Abri o arquivo com fopen na mão,  
mas esqueci de fechar -- vazou meu coração.  

Usei malloc com fé, sem olhar pra trás,  
mas free nunca veio... agora tanto faz.  

Na struct do amor, faltou um typedef,  
e o erro do compilador me deixou sem chefe.  

O loop infinito era só pra testar,  
mas virou minha vida... não quis mais parar.  

Escreva um programa em C que leia esse arquivo e crie um novo arquivo chamado poema_numerado.txt, onde cada linha será precedida por sua numeração, formatada com 3 dígitos e dois pontos (001:, 002:, etc.), como no exemplo abaixo:

Conteúdo gerado no arquivo poema_numerado.txt:

001: No ponteiro esquecido declarei com emoção,  
002: mas na hora de usar... deu segmentation.  
003:   
004: Abri o arquivo com fopen na mão,  
005: mas esqueci de fechar -- vazou meu coração.  
006:   
007: Usei malloc com fé, sem olhar pra trás,  
008: mas free nunca veio... agora tanto faz.  
009:   
010: Na struct do amor, faltou um typedef,  
011: e o erro do compilador me deixou sem chefe.  
012:   
013: O loop infinito era só pra testar,  
014: mas virou minha vida... não quis mais parar.  

*/
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