#include <stdio.h>

int main(){
    int dia, mes, ano;

    scanf("%d/%d/%d", &dia, &mes, &ano);

    char *diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int veri =0;

    if (dia <= 0 || mes <= 0 || ano <= 0){
        veri++;

    }
    if (mes > 12){
        veri++;

    }
    if (ano%4==0 && ano%100!=0){
        if (mes == 2){
                diasMes[mes-1] = diasMes[mes-1] + 1;
        }
    }

    if (diasMes[mes-1] < dia){
        veri++;;
    }

    if (veri > 0){
        printf("Data invalida");
    } else{
        printf("Data valida");
    }

    return 0;
}
