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