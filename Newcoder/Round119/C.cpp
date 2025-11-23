#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int T;
void solve() {
    int l,r;
    cin >> l >> r;
    int cnt = 0;
    if(l <= 1 && r >= 1) cnt++;
    if(l <= 9 && r >= 9) cnt++;
    cout << cnt << endl;
}
signed main()
{
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}