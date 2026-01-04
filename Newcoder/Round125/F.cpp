#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

const ll MOD = 998244353;

// 快速幂计算逆元
ll mod_pow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

ll mod_inv(ll x) {
    return mod_pow(x, MOD - 2);
}

void solve() {
    int n;
    cin >> n;
    vector<ll> l(n), r(n), len(n);
    
    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
        len[i] = (r[i] - l[i] + 1) % MOD;  // 长度模 MOD
    }
    
    // 期望块数 = 1 + Σ Pr[a_i ≠ a_{i+1}]
    ll ans = 1;  // 第一个元素总是开始一个新块
    
    for (int i = 0; i < n - 1; i++) {
        ll L = max(l[i], l[i+1]);
        ll R = min(r[i], r[i+1]);
        
        if (L <= R) {
            // 交集长度
            ll intersection = (R - L + 1) % MOD;
            
            // Pr[a_i = a_{i+1}] = intersection / (len[i] * len[i+1])
            ll same_prob = intersection * mod_inv(len[i]) % MOD;
            same_prob = same_prob * mod_inv(len[i+1]) % MOD;
            
            // Pr[a_i ≠ a_{i+1}] = 1 - same_prob
            ll diff_prob = (1 - same_prob + MOD) % MOD;
            
            ans = (ans + diff_prob) % MOD;
        } else {
            // 没有交集，必然不同
            ans = (ans + 1) % MOD;
        }
    }
    
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}