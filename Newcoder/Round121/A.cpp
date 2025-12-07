#include <iostream>
using namespace std;
int T = 1;
void solve() {
    int a,b,c,n,ans = 0;
    cin >> a >> b >> c >> n;
    ans = n * a;
    if(n <= b) {
        ans -= c;
    }
    cout << ans << endl;
}
signed main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}