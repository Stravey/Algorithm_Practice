#include <iostream>
using namespace std;
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    // int n = 1000000, cnt = 0;
    // for(int i = 1; i <= n; i++) {
    //     for(int j = 2025 - i; j <= n;j += 2025) {
    //         if((j > i) && gcd(i, j) == 1) {
    //             cnt++;
    //         }
    //     }
    // }
    // cout << cnt << endl;
    cout << 93816892 << endl;
    return 0;
}