#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n);
        for(int i = 0;i < n;i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        
        vector<ll> pref(n + 1, 0);
        for (ll i = 0; i < n; i++) pref[i + 1] = pref[i] + a[i];
        
        ll ans = 1e18;
        for (ll y = 0; y < n; y++) {
            ll x = max(0LL, k - (pref[n - y] - a[0]));
            ll presses = (a[0] - x) + y;
            if (x <= a[0]) {
                ans = min(ans, presses);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}