#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
int T;
void solve() {
    ll n;
    cin >> n;
    for(int i = 1;i <= 10;i++) {
        ll x = 1;
        for(int j = 0;j < i;j++) {
            x *= 10;
        }
        ll low = ceil(sqrt((long double)n * x)); 
        ll high = floor(sqrt((long double)(n + 1) * x - 1));    
        if(low <= high) {
            ll m = low;
            ll ans = m * m;
            cout << ans << '\n';
            return;
        }
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}