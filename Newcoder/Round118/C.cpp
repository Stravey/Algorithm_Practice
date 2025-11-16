#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int T = 1;
// ¾ØÕóÎÊÌâ
void solve() {
    ll x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(y1 == y2) {
        ll new_y = (y1 == 0) ? 1 : y1 - 1;
        cout << x1 << " " << new_y << x2 << "  " << new_y << endl;
    } else if(x1 == x2) {
        ll new_x = (x1 == 0) ? 1 : x1 - 1;
        cout << new_x << " " << y1 << " " << new_x << " " << y2 << endl;
    } else {
        cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
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