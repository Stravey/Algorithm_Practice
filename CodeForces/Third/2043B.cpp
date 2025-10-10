#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, d;
        cin >> n >> d;
        if (n >= 5) {
            cout << "13579" << endl;
        } else {
            long long fact = 1;
            for (int i = 1; i <= n; i++) {
                fact *= i;
            }
            for (int divisor = 1; divisor <= 9; divisor += 2) {
                long long mod = divisor;
                long long power = 1;
                for (long long i = 0; i < fact; i++) {
                    power = (power * 10) % mod;
                }
                long long remainder = 0;
                for (long long i = 0; i < fact; i++) {
                    remainder = (remainder * 10 + d) % mod;
                }
                if (remainder == 0) {
                    cout << divisor;
                }
            }
            cout << endl;
        }
    }
    return 0;
}