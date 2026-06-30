#include <iostream>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;
    if(x % y == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}