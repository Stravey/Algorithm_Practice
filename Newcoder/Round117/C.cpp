#include <iostream>
typedef long long ll;
using namespace std;
int T = 1;
void solve() {
    ll n,m;
    cin >> n >> m;
    cout << (n - 1) * m + (m - 1) * n << endl;
}
signed main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}