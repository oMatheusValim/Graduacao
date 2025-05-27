#include "avaliador.h" 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string file_codificado;
    cin >> file_codificado;
    
    ifstream cod_file(file_codificado);

    if (!cod_file.is_open()) {    
        return 1; 
    }

    string p3_orig_magic;
    int width, height, max_intensidade; 

    cod_file >> p3_orig_magic;
    cod_file >> width >> height;
    cod_file >> max_intensidade;

    string extraido_filename = "imagem_escondida_extraida.ppm";
    ofstream ext_file(extraido_filename);

    if (!ext_file.is_open()) {
        cod_file.close();
        return 1; 
    }
 
    ext_file << "P3\n";
    ext_file << width << " " << height << "\n";
    ext_file << 255 << "\n"; 

    int num_pixels = width * height;
    for (int i = 0; i < num_pixels; ++i) {
        int r_esc, g_esc, b_esc;
       
        if (!(cod_file >> r_esc >> g_esc >> b_esc)) {
            break;
        }

        int r_encoded = r_esc % 256;
        int g_encoded = g_esc % 256;
        int b_encoded = b_esc % 256;

        ext_file << r_encoded << " " << g_encoded << " " << b_encoded << "\n";
    }
    cod_file.close();
    ext_file.close();

    arquivo_finalizado("imagem_escondida_extraida.ppm");
    return 0; 
}