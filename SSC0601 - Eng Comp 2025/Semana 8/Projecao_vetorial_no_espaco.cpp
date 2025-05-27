#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Vetor{
    double x, y, z;

    double Norma() const {
        return x*x + y*y + z*z;       
    }

    double ProdutoEscalar(const Vetor& outro){
        return x*outro.x + y*outro.y + z*outro.z;
    }

    Vetor Projecao(const Vetor& outro){
        Vetor result;
        double prodEsc = ProdutoEscalar(outro);
        double normaQ = outro.Norma();

        result.x = prodEsc/normaQ * outro.x;
        result.y = prodEsc/normaQ * outro.y;
        result.z = prodEsc/normaQ * outro.z;
        return result;   
    }
}; 

int main(){
    Vetor v, u;
    cin >> v.x >> v.y >> v.z >> u.x >> u.y >> u.z;
    
    Vetor proj = v.Projecao(u);
    cout << fixed << std::setprecision(2);
    cout << proj.x << " " << proj.y << " " << proj.z << endl;
    return 0;    
}