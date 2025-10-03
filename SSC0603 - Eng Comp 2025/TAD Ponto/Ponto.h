typedef struct ponto Ponto;
// cria um novo ponto
Ponto* Ponto_cria(float x, float y);
// libera um ponto
void Ponto_libera(Ponto* p);
// acessa os valores "x" e "y" de um ponto
int Ponto_acessa(Ponto* p, float* x, float* y);
// atribui os valores "x" e "y" de um ponto
int Ponto_atribui(Ponto* p, float x, float y);
// calcular a distancia entre dois pontos
float Ponto_distancia(Ponto* p1, Ponto* p2);