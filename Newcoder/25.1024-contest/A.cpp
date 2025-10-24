#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long a, n;
    cin >> a >> n;
    long long d;
    if (a >= n) {
        d = a - n;
    } else {
        long long h = 1;
        for (long long i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (i <= a) h = max(h, i);
                if (n / i <= a) h = max(h, n / i);
            }
        }
        d = a - h;
    }
    cout << d << endl;
    return 0;
}