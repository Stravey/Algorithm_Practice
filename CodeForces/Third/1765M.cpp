#include <iostream>
using namespace std;
// ÕÒÖÊÊı
int largestProperDivisor(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return n / i; 
        }
    }
    return 1; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int d = largestProperDivisor(n);
        cout << d << " " << n - d << "\n";
    }
    return 0;
}