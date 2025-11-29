#include <iostream>
#include <vector>
#include <climits>
typedef long long ll;
using namespace std;
const int N = 1e5 + 10;
int T = 1;
ll n,k;
ll a[N];
bool check(ll x) {
    for(int i = 1;i <= k;i++) {
        ll t = 0;
        for(int j = i;j <= n;j += k) {
            if(a[j] + t >= x) {
                t = a[j] + t - x;
            } else {
                return false;
            }
        }
    }
    return true;
}
void solve() {
    cin >> n >> k;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    ll l = 1,r = 1e5;
    while(l < r) {
        ll mid = (l + r + 1) / 2;
        if(check(mid)) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    cout << l << endl;
}
signed main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}