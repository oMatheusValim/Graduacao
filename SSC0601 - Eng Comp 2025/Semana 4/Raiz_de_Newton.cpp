#include <bits/stdc++.h>
using namespace std;

int main(){
    float E, N;
    cin >> E >> N;

    double result=E/2;
    for(int i=1; i < N; i++){
        result = (result + E/result) / 2;
    }
    std::cout << std::fixed << std::setprecision(6) << result;
}