#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;
using ll = long long;
int T = 1;
// 50%
void solve() {
    ll n,k,d;
    cin >> n >> k >> d;
    vector<ll> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    ll groups = 0;
    ll i = 0;
    while(i < n) {
        ll maxx = min(i + k - 1,n - 1);
        ll j = i;
        while(j <= maxx && a[j] - a[i] <= (k - 1) * d) {
            j++;
        }
        j--;
        groups++;
        i = j + 1;
    }
    // ¶þ·Ö
    /* while(i < n) {
        ll low = i,high = min(i + k - 1,n - 1);
        ll best = i;
        while(low <= high) {
            ll mid = (low + high) >> 1;
            if(a[mid] - a[i] <= (k - 1) * d) {
                best = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        groups++;
        i = best + 1;
    } */
    ll need = groups * k - n;
    cout << need << endl;
}
signed main()
{
    while(T--) {
        solve();
    }
    return 0;
}