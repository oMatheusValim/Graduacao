#include <stdio.h>
#include <string.h>

int main() {
    char num[7];
    scanf("%s", num);

    char cent = num[0];
    char dez = num[1];
    char uni = num[2];
    int centavos =(num[4] - '0') *10 + (num[5] - '0');


    char *ext_centavos[21] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez", "onze", "doze", "treze", "catorze", "quinze", "dezeseis", "dezessete", "dezoito", "dezenove", "vinte"};

    char *ext_final = ext_centavos[centavos];

    printf("%c centena(s) %c dezena(s) %c unidade(s) e %s centavo(s)\n", cent, dez, uni, ext_final);

    return 0;
}
