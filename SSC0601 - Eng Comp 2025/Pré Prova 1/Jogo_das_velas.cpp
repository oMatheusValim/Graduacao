#include <bits/stdc++.h>
using namespace std;

int main() {
    int Nvelas;
    cin >> Nvelas;

    int cont = 0, K;

    while (Nvelas != 1) {
        for (int i = Nvelas-1; i > 0; i--) {
            if (Nvelas % i == 0) {
                K = i;
                break; 
            }
        }
        Nvelas -= K;
        cont++;
        
    }

    cout << cont;
    return 0;
}