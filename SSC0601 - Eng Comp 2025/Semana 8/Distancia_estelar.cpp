/*Durante uma missão de exploração intergaláctica, a nave OrtoBot está navegando por regiões desconhecidas do espaço. Para evitar colisões com detritos espaciais, o computador de bordo precisa calcular com precisão a menor distância entre a posição atual da nave e uma trajetória retilínea detectada pelos sensores.

Essas trajetórias são representadas por retas no espaço tridimensional, e a posição da nave por um ponto no espaço. Cada reta é definida por um ponto pertencente à reta e um vetor diretor.

Sua missão é desenvolver um programa que calcule a menor distância entre um ponto e uma reta no espaço tridimensional. Para isso, é obrigatório o uso de struct para representar separadamente:

    um ponto no espaço tridimensional,
    um vetor tridimensional,
    uma reta tridimensional (composta por um ponto e um vetor diretor).

A menor distância Exp entre um ponto Exp e uma reta definida por um ponto Exp e um vetor diretor Exp é dada por:

d = \frac { ||\vec{v} x \vec{PR_0}|| } { ||\vec{v}|| }

onde:

    \vec{PR_0} é o vetor que vai de R_0 até P,
    x representa o produto vetorial,
    ||.|| é a norma (módulo) do vetor.

Entrada

A entrada consiste em uma única linha com 9 números reais x_p, y_p, z_p, x_0, y_0, z_0, v_x, v_y, v_z, representando:

    as coordenadas do ponto P = (x_p, y_p, z_p),
    as coordenadas do ponto R_0 = (x_0, y_0, z_0) pertencente à reta,
    o vetor diretor \vec{v} = (v_x, v_y, v_z) da reta.

Os valores são fornecidos com até 4 casas decimais.
Saída

Seu programa deve imprimir uma única linha com a menor distância entre o ponto e a reta, com 6 casas decimais de precisão.
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Ponto {
    double x, y, z;
};

struct Vetor {
    double x, y, z;
};

struct Reta{
    Ponto p;
    Vetor dir;
};

Vetor SegmentoRetaPonto(Ponto p1, Ponto p2) {
    Vetor difRP;
    difRP.x = p2.x-p1.x;
    difRP.y = p2.y-p1.y;
    difRP.z = p2.z-p1.z;
    return difRP;
}

Vetor ProdutoVetorial(Vetor v1, Vetor v2) {
    Vetor prodVet;
    prodVet.x = v1.y * v2.z - v1.z * v2.y;
    prodVet.y = v1.z * v2.x - v1.x * v2.z;
    prodVet.z = v1.x * v2.y - v1.y * v2.x;
    return prodVet;
}

double Norma (Vetor v) {
    return sqrt(v.x*v.x + v.y*v.y + v.z*v.z); 
} 
    
int main(){
    Ponto ponto, reta;
    Vetor vetorDire;
    cin >> ponto.x >> ponto.y >> ponto.z;
    cin >> reta.x >> reta.y >> reta.z;
    cin >> vetorDire.x >> vetorDire.y >> vetorDire.z;


    Vetor p1q = SegmentoRetaPonto(ponto, reta);

    Vetor produto_cruz = ProdutoVetorial(p1q, vetorDire);

    double norma_produto_cruz = Norma(produto_cruz);

    double norma_dir_reta = Norma(vetorDire);

    double distancia = norma_produto_cruz / norma_dir_reta;

    cout << fixed << std::setprecision(6);
    cout << distancia << endl;
    return 0;
}