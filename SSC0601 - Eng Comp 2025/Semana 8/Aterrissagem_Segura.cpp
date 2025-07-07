/*Durante uma missão de reconhecimento em um planeta recém-descoberto, a sonda OrtoBot foi programada para seguir uma trajetória retilínea no espaço tridimensional até aterrissar em uma plataforma de pouso invisível — representada por um plano.

Sua missão como engenheiro de navegação é implementar o sistema que calcula o ponto de interseção entre a reta de trajetória da sonda e o plano de aterrissagem. Caso não haja ponto de contato direto (por exemplo, se a trajetória for paralela à plataforma), o sistema deve emitir uma mensagem de alerta.

Para garantir a organização do código, o programa deve utilizar structs para representar pontos e vetores tridimensionais.
Entrada

A entrada contém duas linhas:

    A primeira linha contém seis números reais: x0 y0 z0 vx vy vz

    Onde (x0, y0, z0) é um ponto da trajetória da sonda, e (vx, vy, vz) é o vetor diretor da reta que representa sua direção de movimento.

    A segunda linha contém quatro números reais: a b c d

    Representando o plano de aterrissagem na forma:

    a.x + b.y + c.z + d = 0

Restrições:

    Todos os números reais estão no intervalo [-1000.0, 1000.0].
    O vetor diretor (vx, vy, vz) nunca será o vetor nulo.
    Pelo menos um dos coeficientes a, b ou c será diferente de zero.

Saída

O programa deve imprimir:

    Se houver ponto de interseção:

    Intersecao: x=..., y=..., z=...

    Com os valores reais exibidos com seis casas decimais.

    Se a trajetória estiver contida no plano (infinitos pontos de interseção):

    A reta esta contida no plano

    Se a trajetória for paralela ao plano e não houver interseção:

    A reta e paralela ao plano

*/
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
