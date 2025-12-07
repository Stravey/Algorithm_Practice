#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
using ll = long long;
const int mod = 998244353;
int T = 1;
void solve() {
    ll n;
    string s;
    cin >> n >> s;
    vector<ll> cnt(26,0);
    for(char c : s) {
        cnt[c - 'a']++;
    }
    ll ans = 0;
    for(int i = 0;i < 26;i++) {
        for(int j = i + 1;j < 26;j++) {
            for(int k = j + 1;k < 26;k++) {
                ll ways = cnt[i] % mod * cnt[j] % mod  * cnt[k] % mod * 6 % mod;
                ans = (ans + ways) % mod;
            }
        }
    }
    cout << ans % mod << endl;
}
signed main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}