#include "Ponto.h"
#include <stdio.h>

int main(){
    float x1, y1, x2, y2, dist;
    Ponto *p1, *p2;

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    p1 = Ponto_cria(x1, y1);
    p2 = Ponto_cria(x2, y2);

    dist = Ponto_distancia(p1, p2);
    printf("%.2f\n", dist);
    
    Ponto_libera(p1);
    Ponto_libera(p2);
    return 0;
}