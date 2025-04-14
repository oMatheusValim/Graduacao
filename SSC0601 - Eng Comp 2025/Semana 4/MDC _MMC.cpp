#include <iostream>
using namespace std;

int MDC2(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int MDC3(int a, int b, int c) {
    return MDC2(MDC2(a, b), c);
}

long long MMC3(int a, int b, int c) {
    long long mdc_ab = MDC2(a, b);
    long long mmc_ab = (static_cast<long long>(a) * b) / mdc_ab;
    
    long long mdc_abc = MDC2(mmc_ab, c);
    return (mmc_ab * c) / mdc_abc;
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    
    cout << MDC3(x, y, z) << endl;
    cout << MMC3(x, y, z) << endl;
    
    return 0;
}