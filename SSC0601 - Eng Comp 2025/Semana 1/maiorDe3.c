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
    if (n1 == n2 || n2 == n3){
        printf("Ha numeros iguais");
    } else{
        printf("%d", n3);
    }

    return 0;
}