/*Esteganografia é uma técnica utilizada para ocultar informações dentro de arquivos aparentemente comuns. Diferente da criptografia, que busca tornar as mensagens ilegíveis, a esteganografia procura esconder a existência das próprias mensagens. Um exemplo típico é ocultar uma imagem dentro de outra imagem.

Neste exercício, você deverá implementar um programa em C que realize a codificação de uma imagem escondida dentro de outra imagem, utilizando uma técnica esteganográfica simples, explicada a seguir.
Formato das imagens utilizadas (PPM ASCII)

As imagens utilizadas neste problema estarão no formato PPM (Portable PixMap) ASCII. Uma imagem nesse formato tem a seguinte estrutura:

P3
<largura> <altura>
<intensidade máxima>
R G B
R G B
R G B
...

    P3: Identificador do formato.
    largura altura: dimensão da imagem em pixels.
    intensidade máxima: valor máximo possível para cada canal (geralmente 255 para imagens normais e 65535 para imagens de alta resolução).
    Os valores seguintes representam os pixels. Cada pixel é formado por três valores inteiros, representando as cores vermelho (R), verde (G) e azul (B), e deve ser lido ou impresso em uma linha separada.

Como a imagem deve ser codificada

Você deverá receber duas imagens, ambas com intensidade máxima igual a 255:

    Imagem original: a imagem que irá ocultar a outra.
    Imagem escondida: a imagem que será oculta dentro da original.

Ambas possuem a mesma dimensão (largura e altura).

A imagem codificada será gerada com intensidade máxima 65535. Para cada canal de cor (R, G e B), a seguinte operação matemática deve ser aplicada:

valor codificado = (valor imagem original x 256) + valor imagem escondida

Por exemplo, se temos:

    valor imagem original = 10
    valor imagem escondida = 200

Então:

valor codificado = (10 * 256) + 200 = 2760

O valor da imagem original fica armazenado nos dígitos mais significativos (multiplicado por 256), enquanto o valor da imagem escondida fica armazenado nos dígitos menos significativos.
Sua tarefa (Codificação da imagem escondida)

Você deve escrever um programa que, dadas duas imagens no formato PPM ASCII com intensidade máxima 255 e as mesmas dimensões, gere uma terceira imagem, chamada de imagem codificada, com intensidade máxima 65535, aplicando a operação descrita acima.
Entrada

Seu programa deverá ler da entrada padrão os nomes dos dois arquivos de entrada, nesta ordem:

    O nome do arquivo contendo a imagem original.
    O nome do arquivo contendo a imagem escondida.

Exemplo de entrada:

imagem_original.ppm
imagem_escondida.ppm

Saída

Seu programa deverá gerar um arquivo PPM ASCII com o nome exatamente:

imagem_codificada.ppm

A imagem codificada deve ter intensidade máxima 65535 (16 bits).

O formato do arquivo de saída deve ser exatamente:

P3
<largura> <altura>
65535
R G B
R G B
...

Cada pixel deve ser impresso em uma linha separada, com os valores separados por espaço, seguindo a ordem: vermelho, verde, azul.
*/
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