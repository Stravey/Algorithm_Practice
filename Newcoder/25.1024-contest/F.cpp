#include <iostream>
using namespace std;
const int mod = 251024;
const long long mod_d = 998224353;
long long sum(long long n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        long long l, r;
        cin >> l >> r;
        l %= mod;
        r %= mod;
        if (l > r) {
            cout << "0\n";
            continue;
        }
        long long ans = (sum(r) - sum(l - 1)) % mod_d;
        if (ans < 0) ans += mod_d;
        cout << ans << '\n';
    }
    return 0;
}