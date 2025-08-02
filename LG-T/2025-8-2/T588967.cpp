#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MOD = 998244353;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < n; ++i) {
        if (i + 1 < n && a[i] < a[i + 1]) {
            dp[i + 2] = (dp[i + 2] + dp[i]) % MOD;
            swap(a[i], a[i + 1]);
            dp[i + 1] = (dp[i + 1] + dp[i]) % MOD;
            swap(a[i], a[i + 1]);
        }
        dp[i + 1] = (dp[i + 1] + dp[i]) % MOD;
    }
    cout << dp[n] << endl;
    return 0;
}