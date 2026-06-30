#include <iostream>
#include <algorithm>

#define int long long

// 构造题 用 0 1构造 最多不能超过两个不同的数字
using namespace std;

void solve() {
    int x;
    cin >> x;
    int p = 10;
    while(p <= x) {
        p *= 10;
    }
    cout << p + 1 << endl;
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