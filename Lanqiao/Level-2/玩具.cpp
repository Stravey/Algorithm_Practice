#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
int T = 1;
void solve() {
    int n;
    cin >> n;
    vector<ll> w(2 * n);
    for(ll i = 0;i < 2 * n;i++) {
        cin >> w[i];
    }
    sort(w.begin(),w.end());
    int i = 0,j = 2 * n - 1;
    ll ans = 0;
    while(i < j) {
        ans += w[i] * w[j];
        i++;
        j--;
    }
    cout << ans << endl;
}
signed main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}