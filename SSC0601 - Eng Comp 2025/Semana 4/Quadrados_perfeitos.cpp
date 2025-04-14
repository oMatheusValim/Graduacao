#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    float possiveis = N/2;
    if(N==1){
        possiveis=N;
    }

    for(int i=1; i<=N; i++){
        for(int j=1; j<=possiveis; j++){
            if (j*j == i){
                cout << i << endl;
                break;
            }
        }

    }
}