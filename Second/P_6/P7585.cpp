#include <iostream>
#include <vector>
using ll = long long;
using namespace std;

bool check(ll x, const vector<ll>& a, ll n) {
    if (x == 0) return false;  
    ll sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += a[i] / x;
        if (a[i] % x != 0) {
            sum++;
        }
    }
    return sum <= n;
}

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m);
    ll max_val = 0;
    for (int i = 0; i < m; i++) {
        cin >> a[i];
        max_val = max(max_val, a[i]);
    }
    ll l = 1, r = max_val;
    ll ans = max_val;  
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (check(mid, a, n)) {
            ans = mid;
            r = mid - 1; 
        } else {
            l = mid + 1;
        }
    }   
    cout << ans << endl;
}
int main() {
    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}