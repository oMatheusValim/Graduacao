#include <bits/stdc++.h>
using namespace std;

int main(){
    long int X, Y;
    cin >> X >> Y;

    if(Y==0){
        cout << 1;
    } else{
        int multiplicativo=X;

        for (int i=1; i<Y; i++){
            X*=multiplicativo;
        }
        cout << X;
    }
}