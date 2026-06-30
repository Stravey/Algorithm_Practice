#include <iostream>
#include <algorithm>
#include <vector>
#define int long long

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int & x : a) {
        cin >> x;
    }
    // 前缀和
    int prefix = 0;
    bool flag = true;

    for(int i = 0; i < n; i++) {
        int b;
        cin >> b;
        prefix += b - a[i];
        if(prefix < 0) {
            flag = false;
        }
    }

    cout << (flag ? "YES\n" : "NO\n");
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