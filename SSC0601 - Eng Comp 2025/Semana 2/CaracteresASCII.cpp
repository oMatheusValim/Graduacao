#include <iostream>
using namespace std;

int main() {
    char c1, c2, c3;
    
    c1 = cin.get();
    c2 = cin.get();
    c3 = cin.get();

    cout << c1 << " " << static_cast<int>(c1) << endl;
    cout << c2 << " " << static_cast<int>(c2) << endl;
    cout << c3 << " " << static_cast<int>(c3) << endl;

    return 0;
}

