#include <iostream>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;
int T = 1;
void solve() {
    ll n,p,minn = 1e18;;
    cin >> n >> p;
    vector<ll> a(n + 1),b(n + 1);
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++) {
        b[i] = a[i] - a[i - 1];
    }
    for(int i = 0;i < p;i++) {
        int x,y,z;
        cin >> x >> y >> z;
        b[x] += z;
        b[y + 1] -= z;
    }
    for(int i = 1;i <= n;i++) {
        a[i] = a[i - 1] + b[i];
        if(minn > a[i]) {
            minn = a[i];
        }
    }
    cout << minn << endl;
}
signed main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}