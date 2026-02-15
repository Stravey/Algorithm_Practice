#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> f(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> f[i];
    }

    // 由公式可以推出 f(x) - f(x + 1) = Sn - 2 * Sx
    // Sn是本题的核心 可由f(x)的前缀和求和
    // 并由该式得 f(1) + f(n) = (n - 1) * Sn
    ll Sn = ( f[1] + f[n] ) / (n - 1);

    vector<ll> S(n + 1);
    vector<int> a(n + 1);

    // 计算前缀和
    for(int x = 1; x <= n; x++) {
        S[x] = (Sn - (f[x] - f[x +  1])) / 2;
    }
    S[n] = Sn;

    // 计算 a
    a[1] = S[1];
    for(int i = 2; i <= n; i++) {
        a[i] = S[i] - S[i - 1];
    }

    for(int i = 1; i <= n; i++) {
        cout << a[i] << (i == n ? "\n" : " ");
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        
        solve();

    }
    return 0;
}