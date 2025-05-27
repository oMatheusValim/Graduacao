#include <iomanip>
#include <iostream>
using namespace std;

struct Ponto{
    double x, y, z;
};

struct Vetor{
    double x, y, z;
};

struct Plano{
    double a, b, c, d;
};

Vetor PontoIntersecao(Ponto P, Vetor  u, Plano pi) {
    double num = - (pi.a*P.x + pi.b*P.y + pi.c*P.z + pi.d);
    double deno = pi.a*u.x + pi.b*u.y + pi.c*u.z;

    Vetor v;
    if(deno == 0){
        if(num == 0){
            cout << "A reta esta contida no plano" << endl;
        } else{ 
            cout << "A reta e paralela ao plano" << endl;
        }
        v.x = 0.0;
        v.y = 0.0;
        v.z = 0.0;
    }else {
        double l = num/deno;
        v.x = P.x + l*u.x;
        v.y = P.y + l*u.y;
        v.z = P.z + l*u.z;
    
        cout << fixed << setprecision(6);
        cout << "Intersecao: x=" << v.x << ", y=" << v.y << ", z=" << v.z << endl;
    }
}

int main(){
    Ponto P;
    Vetor u;
    Plano pi;
    
    cin >> P.x >> P.y >> P.z >> u.x >> u.y >> u.z;
    cin >> pi.a >> pi.b >> pi.c >> pi.d;
    PontoIntersecao(P, u, pi);

}
