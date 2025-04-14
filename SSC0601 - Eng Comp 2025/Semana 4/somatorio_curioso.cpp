#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p;
    cin >> n >> p;

    long double soma = 0.0;
    for(int i=1; i<=n; i++){
        soma += sqrt(p+i) / sqrt(i);
    }
    cout << fixed << setprecision(6) << soma;
}