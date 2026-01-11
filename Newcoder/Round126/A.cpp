#include <iostream>
#include <string>
using namespace std;
int T = 1;
void solve() {
    int x;
    cin >> x;
    int p = x;
    for(int i = 0;i < 5;i++) {
        cout << p + i << " ";
    }
}
signed main()
{
    while(T--) {
        solve();
    }
    return 0;
}