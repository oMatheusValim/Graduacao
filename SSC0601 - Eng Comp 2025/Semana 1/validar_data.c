/*O programa deve verificar se a data fornecida pelo usuário é válida. A data deve ser fornecida no formato "dd/mm/aaaa". O programa deve verificar se o mês está entre 1 e 12 e se o dia é válido para o mês informado (por exemplo, fevereiro não pode ter mais de 29 dias, e o mês de abril não pode ter 31 dias). Caso a data seja válida, deve-se exibir "Data valida", caso contrário, "Data invalida".

Entrada:

    Uma data no formato "dd/mm/aaaa".

Saída:

    Se a data for valida: "Data valida".
    Caso contrário: "Data invalida".
*/
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
