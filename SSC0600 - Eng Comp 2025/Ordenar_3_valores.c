/*Escreva um programa que leia 3 valores inteiros (lidos da entrada)
Escreva os tres valores em ordem crescente na tela seguinte forma:
(menor valor) (valor do meio) (maior valor)
Se os 3 valores forem iguais escreva a mensagem: "Valores iguais" */
#include <stdio.h>

int main() {
    int n1, n2, n3, memo;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2){
        memo = n1;
        n1 = n2;
        n2 = memo;
    } 
    if (n2 > n3){
        memo = n2;
        n2 = n3;
        n3 = memo;
    }
    if (n1 > n2){
        memo = n1;
        n1 = n2;
        n2 = memo;
    }
    if (n1 == n2 && n2 == n3){
        printf("Valores iguais");
    }else{
        printf("%d %d %d", n1, n2, n3);
    }

    return 0;
}