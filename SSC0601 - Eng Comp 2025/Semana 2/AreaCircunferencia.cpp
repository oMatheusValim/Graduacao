#include <bits/stdc++.h>
using namespace std;

int main(){
    float raio;
    cin >> raio;

    double pi = 2 * acos(0.0);
    float area = pow(raio, 2) * pi;

    printf("%.4e", area);
}