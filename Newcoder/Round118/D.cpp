#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
typedef long long ll;
using namespace std;
int T = 1;
// 拿石子 博弈论问题
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end(),greater<ll>());
    ll red_total = 0;
    for(int i = 0;i < n;i++) {
        ll stones = a[i] - i;
        if(stones > 0) {
            red_total += stones;
        }
    }
    cout << red_total << endl;
}
signed main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}