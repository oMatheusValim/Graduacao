#include "avaliador.h" 
#include <iostream>
#include <fstream>
#include <string>
#include <vector> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string original_filename;
    string hidden_filename;
    cin >> original_filename >> hidden_filename;
    
    ifstream original_file(original_filename);
    ifstream hidden_file(hidden_filename);

    if (!original_file.is_open()) {    
        return 1; 
    }
    if (!hidden_file.is_open()) {
        original_file.close();
        return 1; 
    }

    string p3_orig_magic, p3_hidden_magic;
    int width, height, max_val_orig, max_val_hidden; 

    original_file >> p3_orig_magic;
    original_file >> width >> height;
    original_file >> max_val_orig;

    hidden_file >> p3_hidden_magic;
    int temp_width_hidden, temp_height_hidden; 
    hidden_file >> temp_width_hidden >> temp_height_hidden;
    hidden_file >> max_val_hidden;

    string encoded_filename = "imagem_codificada.ppm";
    ofstream encoded_file(encoded_filename);

    if (!encoded_file.is_open()) {
        original_file.close();
        hidden_file.close();
        return 1; 
    }
 
    encoded_file << "P3\n";
    encoded_file << width << " " << height << "\n";
    encoded_file << 65535 << "\n"; 

    int num_pixels = width * height;
    for (int i = 0; i < num_pixels; ++i) {
        int r_orig, g_orig, b_orig;
        int r_hidden, g_hidden, b_hidden;
       
        if (!(original_file >> r_orig >> g_orig >> b_orig)) {
            break;
        }

        if (!(hidden_file >> r_hidden >> g_hidden >> b_hidden)) {
            break;
        }

        int r_encoded = (r_orig * 256) + r_hidden;
        int g_encoded = (g_orig * 256) + g_hidden;
        int b_encoded = (b_orig * 256) + b_hidden;

        encoded_file << r_encoded << " " << g_encoded << " " << b_encoded << "\n";
    }

    original_file.close();
    hidden_file.close();
    encoded_file.close();

    arquivo_finalizado("imagem_codificada.ppm");
    return 0; 
}