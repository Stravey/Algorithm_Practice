#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;
using ll = long long;
int T = 1;
// 25%
bool check(ll h1,ll h2,ll d) {
    return abs(h1 - h2) <= d;
}
void solve() {
    ll n,d;
    cin >> n >> d;
    vector<ll> s(n + 2),t(n + 2),h(n + 2);
    for(int i = 1;i <= n + 1;i++) {
        cin >> s[i] >> t[i] >> h[i];
    }
    ll s1 = s[1];
    ll t1 = t[1];
    ll h1 = h[1];
    for(int i = 2;i <= n + 1;i++) {
        ll si = s[i];
        ll ti = t[i];
        ll hi = h[i];
        if (!check(h1, hi, d)) {
            cout << "No\n";
            continue;
        }
        if (s1 == si && t1 == ti) {
            cout << "Always\n";
            continue;
        }
        ll A = s1 - si;
        ll B = (ti - si) - (t1 - s1);
        if(B == 0) {
            if(A == 0) {
                double start = max(s1,si);
                double end = min(t1,ti);
                if(start <= end) {
                    cout << fixed << setprecision(6) << start << endl;
                } else {
                    cout << "No\n";
                }
            } else {
                cout << "No\n";
            }
            continue;
        }
        double ans = (double)A / B;
        if(ans < 0 || ans > 1) {
            cout << "No\n";
            continue;
        }
        double meet = s1 + (t1 - s1) * ans;
        if(meet >= max(s1,si) && meet <= min(t1,ti)) {
            cout << fixed << setprecision(6) << meet << endl;
        } else {
            cout << "No\n";
        }
    }
}
signed main()
{
    while(T--) {
        solve();
    }
    return 0;
}