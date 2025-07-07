/*Durante uma missão espacial de monitoramento de detritos orbitais, a sonda brasileira OrtoBot precisa analisar o movimento de objetos em alta velocidade que se aproximam da região ao seu redor. Para isso, o sistema de navegação utiliza um conceito fundamental da geometria vetorial: a projeção de um vetor sobre outro.

Mais especificamente, a OrtoBot deseja calcular quanto do vetor de deslocamento de um detrito (v) está alinhado com a direção da sua trajetória segura (u). Esse valor é útil para avaliar o grau de alinhamento entre os movimentos: se a projeção de \vec{v} sobre \vec{u} tiver magnitude elevada e apontar na mesma direção da sonda, isso pode indicar potencial risco. Por outro lado, uma projeção nula ou perpendicular sugere que o objeto não se moverá na mesma direção da nave, reduzindo as chances de aproximação direta.

Sua missão é implementar um programa que receba dois vetores tridimensionais e calcule a projeção do primeiro vetor sobre o segundo, utilizando obrigatoriamente structs para representar vetores no espaço tridimensional.
Definição

Sejam dois vetores tridimensionais \vec{v} = (v_x, v_y, v_z) e \vec{u} = (u_x, u_y, u_z). A projeção de \vec{v} sobre \vec{u}, denotada por:

proj_\vec{u} \vec{v} = (\frac {\vec{v} . \vec{u}} {|\vec{u}²|}) \vec{u}

onde:

    \vec{v} . \vec{u} = v_x u_x + v_y u_y + v_z u_z -> (produto escalar);
    |\vec{u}²| = (u_x)² + (u_y)² + (u_z)²

Entrada

A entrada consiste em uma única linha com seis números reais representando os componentes dos vetores \vec{v} e \vec{u}, nesta ordem:

vx vy vz ux uy uz

Os valores estão no intervalo [-1000, 1000] e têm até duas casas decimais.
Saída

Imprima em uma única linha com as três componentes do vetor projeção, separadas por espaço, com duas casas decimais de precisão.*/
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