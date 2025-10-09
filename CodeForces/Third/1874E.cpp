#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
typedef long long ll;
using namespace std;

int main() 
{
    ll t;
    cin >> t;
    while(t--) {
        ll n,x;
        cin >> n >> x;
        vector<ll> a(n);
        for(int i = 0;i < n;i++) {
            cin >> a[i];
        }
        ll l = 1,r = 1e10;
        ll ans = 1;
        while(l <= r) {
            ll mid = (l + r) / 2;
            ll need = 0;
            for(int i = 0;i < n;i++) {
                if(mid > a[i]) {
                    need += mid - a[i];
                    if(need > x) break;
                }
            }
            if(need <= x) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}