#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int T = 1;
// ¾ØÕóÎÊÌâ
void solve() {
    ll x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1 != x2 && y1 != y2) {
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
        return;
    } else if(x1 == x2) {
        cout << x1 + 1 << " " << y1 << " " << x2 + 1 << " " << y2 << endl;
        return;
    } else if(y1 == y2) {
        cout << x1 << " " << y1 - 1 << " " << x2 << "  " << y2 - 1 << endl;
        return;
    }
}
signed main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}