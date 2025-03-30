#include <stdio.h>

int main(){
    int dia, mes;
    
    scanf("%d %d", &dia, &mes);

    int diasDOmes[12] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int diasAcumulados = 0;

    for (int i = 0; i < mes -1; i++){
        diasAcumulados += diasDOmes[i];
    }

    int diaDAsemana = (diasAcumulados + dia + 2) % 7;
    char *diaSemana[7] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};

    printf("%s\n", diaSemana[diaDAsemana]);
    return 0;
}