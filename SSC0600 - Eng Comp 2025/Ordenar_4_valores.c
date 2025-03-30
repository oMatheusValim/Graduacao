#include <stdio.h>

int main() {
    int n1, n2, n3, n4, memo;

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

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
    if (n3 > n4){
        memo = n3;
        n3 = n4;
        n4 = memo;
    }

    if (n1 == n2 && n2 == n3 && n3 == n4){
        printf("Valores iguais");
    }else{
        printf("%d %d %d %d", n1, n2, n3, n4);
    }

    return 0;
}