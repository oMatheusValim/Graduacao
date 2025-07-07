/*LER UM VALOR INTEIRO (ENTRE 0 e 999) E ESCREVER NA TELA DA SEGUINTE FORMA:
* Nro. de centenas
* Nro. de dezenas
* Unidades "por extenso"
(sempre sem acentos ou caracteres especiais, siga o exemplo abaixo) 
*/
#include <stdio.h>

int main() {
    char num[4];
    scanf("%s", num);

    char cent = num[0];
    char dez = num[1];
    char uni = num[2];

    int unidade = uni - '0';

    char *ext;

    switch (unidade) {
        case 0:
            ext = "zero";
            break;
        case 1:
            ext = "uma";
            break;
        case 2:
            ext = "duas";
            break;
        case 3:
            ext = "tres";
            break;
        case 4:
            ext = "quatro";
            break;
        case 5:
            ext = "cinco";
            break;
        case 6:
            ext = "seis";
            break;
        case 7:
            ext = "sete";
            break;
        case 8:
            ext = "oito";
            break;
        case 9:
            ext = "nove";
            break;
        default:
            ext = "invalido";
            break;
    }

    printf("%c centena(s) %c dezena(s) e %s unidades\n", cent, dez, ext);

    return 0;
}
