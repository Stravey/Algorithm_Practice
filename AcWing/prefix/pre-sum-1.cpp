#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 100010;

int n, m;
int a[N], s[N]; // s[i] 前缀和数组

void solve() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    while(m--) {
        int l, r;
        cin >> l >> r;
        cout << s[r] - s[l - 1] << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false); // 使用这个不能再使用scanf
    cin.tie(0);
    cout.tie(0);
    
    solve();
    
    return 0;
}
