#include <iostream>
typedef long long ll;
using namespace std;
int T = 1;
void solve() {
    ll l,r;
    cin >> l >> r;
    ll a = 0,b = 0,c = 0;
    ll len = r - l + 1;
    ll f = len / 3;
    a += f;
    b += f;
    c += f;
    ll sx = len % 3;
    for(ll i = 0;i < sx;i++) {
        ll pos = l + i;
        ll mod = pos % 3;
        if(mod == 1) a++;
        else if(mod == 2) b++;
        else c++;
    }
    cout << a << " " << b << " " << c << endl;
}
signed main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}