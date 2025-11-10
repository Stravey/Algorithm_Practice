#include <iostream>
typedef long long ll;
using namespace std;
int T = 1;
void solve() {
    int a,b;
    cin >> a >> b;
    if(a == 1 && b == 1) {
        cout << "LU" << endl;
    } else if(a == 1 && b == 2) {
        cout << "LD" << endl;
    } else if(a == 2 && b == 1) {
        cout << "RU" << endl;
    } else {
        cout << "RD" << endl;
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