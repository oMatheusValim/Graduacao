#include <bits/stdc++.h>
using namespace std;

struct Vetor {
    int x, y, z;

    Vetor ProdutoVetorial(const Vetor& outro) {
        Vetor resultado;
        resultado.x = y * outro.z - z * outro.y;
        resultado.y = z * outro.x - x * outro.z;
        resultado.z = x * outro.y - y * outro.x;
        return resultado;
    }
};

int main() {
    Vetor p1, p2;
    cin >> p1.x >> p1.y >> p1.z;
    cin >> p2.x >> p2.y >> p2.z;

    Vetor resultado = p1.ProdutoVetorial(p2);
    cout << resultado.x << " " << resultado.y << " " << resultado.z << endl;

    return 0;
}
