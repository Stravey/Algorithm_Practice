#include <iostream>
#include <vector>
using namespace std;
int T = 1;
void solve() {
    int n;
    cin >> n;
    if(n == 1) {
        cout << "aba" << endl;
    } else if(n == 2) {
        cout << "aabaa" << endl;
    } else if(n == 3) {
        cout << "aaabaaa" << endl;
    } else if(n == 4) {
        cout << "aaaabaaaa" << endl;
    } else {
        cout << "aaaaabaaaaa" << endl;
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