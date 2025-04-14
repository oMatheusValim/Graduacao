#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int e=1; e<=n; e++){
        int r1=0;
        while(r1 < e){
            cout << "*\t";
            r1++;
        }
        cout << endl;
    }
    for(int e=n-1; e >= 1; e--){
        int r2=0;
        while(r2 < e){
            cout << "*\t";
            r2++;
        }
        cout << endl;
    }
}