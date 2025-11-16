#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int T = 1;
// 简易博弈论问题
void solve() {
    ll n;
    cin >> n;
    if(n == 1 || n == 2) {
        cout << "red" << endl;
    } else {
        cout << "purple" << endl;
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