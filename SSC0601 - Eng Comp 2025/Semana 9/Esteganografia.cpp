/*Descrição do Problema

Esteganografia é uma técnica utilizada para ocultar informações dentro de arquivos aparentemente comuns. Diferente da criptografia, que busca tornar as mensagens ilegíveis, a esteganografia procura esconder a existência das próprias mensagens. Um exemplo típico é ocultar uma imagem dentro de outra imagem.

Neste exercício, você deverá implementar um programa em C que realize a decodificação de uma imagem escondida, que foi previamente codificada dentro de outra imagem usando uma técnica esteganográfica simples, explicada a seguir.
Formato da imagem utilizada (PPM ASCII)

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
    Os valores seguintes representam os pixels. Cada pixel é formado por três valores inteiros, representando as cores vermelho (R), verde (G) e azul (B), e deve ser impresso em uma linha separada no arquivo de saída.

Exemplo simples de pixel vermelho puro: 255 0 0 (na mesma linha).
Como a imagem foi codificada

A imagem que você receberá para decodificar foi gerada a partir de duas imagens de 8 bits cada (valores de 0 a 255 por canal), utilizando uma técnica matemática simples de esteganografia:

Para cada canal de cor (R, G e B):

Exp

Por exemplo, se temos:

    valor imagem original = 10
    valor imagem escondida = 200

Então:

Exp

Observe que os valores da imagem original ficam armazenados nos dígitos mais significativos (multiplicados por 256), enquanto os valores da imagem escondida ficam nos dígitos menos significativos.
Sua tarefa (Decodificação da imagem escondida)

Você deve escrever um programa que faça o caminho inverso, ou seja, dada uma imagem codificada com essa técnica (intensidade máxima 65535), extraia apenas a imagem escondida.

Para cada canal de cor, a decodificação é feita com a seguinte operação matemática:

Exp

Exemplo anterior:

    valor codificado = 2760
    valor escondido = 2760 % 256 = 200

*/
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