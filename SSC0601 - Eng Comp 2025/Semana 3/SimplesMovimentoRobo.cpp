#include <bits/stdc++.h>
using namespace std;

int main(){
    int numComandos;
    cin >> numComandos;

    int x=0, y=0;
    char dire;

    for (int i = 0; i < numComandos ; i++){
        cin >> dire;

        if (dire == 'S'){
            y--;
        } else if(dire == 'N'){
            y++;
        } else if(dire == 'L'){
            x++;
        } else{
            x--;
        }
    }
    cout << x << " " << y;
}

// pode subir
