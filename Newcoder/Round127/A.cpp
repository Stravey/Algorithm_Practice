#include <iostream>
using namespace std;
int T = 1;
void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    if((a + b == c) || (a - b == c) || (a * b == c) || (a % b == 0 && a / b == c)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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