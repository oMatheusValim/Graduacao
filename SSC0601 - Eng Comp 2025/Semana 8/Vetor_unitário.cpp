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