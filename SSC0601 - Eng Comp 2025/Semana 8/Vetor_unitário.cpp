/*Durante uma missão de exploração espacial, a sonda OrtoBot foi encarregada de realizar manobras precisas para alinhar seus sensores com objetos de interesse no espaço tridimensional. Para isso, ela precisa calcular a direção pura de vetores que indicam trajetórias ou posições relativas — ou seja, precisa calcular o vetor unitário correspondente a cada vetor recebido.

No entanto, os engenheiros da missão determinaram que, para garantir a segurança da navegação, vetores nulos (de norma zero) devem ser tratados de forma especial, pois não representam nenhuma direção válida.

Você foi encarregado de implementar esse módulo de cálculo. Para isso, deverá usar structs para representar vetores tridimensionais.
Dica

O vetor unitário Exp de um vetor \vec u é obtido dividindo cada uma de suas coordenadas pela sua norma. A norma (ou módulo) de um vetor \vec v = (x, y, z) é dada por:

|| \vec v || = sqrt(x²+y²+z²)

Portanto, o vetor unitário é:
\vec u = (\frac {x}{|| \vec  v||}, \frac {y}{|| \vec  v||}, \frac {z}{|| \vec  v||})

Entrada

A entrada consiste em uma única linha contendo três números inteiros x, y e z, representando as coordenadas do vetor tridimensional \vec v = (x, y, z).

    -1000 <= x, y, z <= 1000

Saída

Se o vetor for nulo (ou seja, se x = y = z = 0), imprima a mensagem:

Vetor nulo.

Caso contrário, imprima três números reais representando o vetor unitário correspondente a \vec v, com 6 casas decimais, separados por espaço.*/
#include <bits/stdc++.h>
using namespace std;

struct Vetor{
    int x, y, z;

    double Norma() const {
        return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    }

    void VetorUnitario() const {
        double norma = Norma();
        if(x == y && y == z && z == 0){
            cout << "Vetor nulo.";
        } else{
            double UniX, UniY, UniZ;
            UniX = x/norma;
            UniY = y/norma;
            UniZ = z/norma;

            cout << std::fixed << std::setprecision(6) << UniX << " ";
            cout << std::fixed << std::setprecision(6) << UniY << " ";
            cout << std::fixed << std::setprecision(6) << UniZ << endl;
        }
    }
};


int main(){
    Vetor vet;
    cin >> vet.x >> vet.y >> vet.z;

    vet.VetorUnitario();
    return 0;
}