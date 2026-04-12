#include <bits/stdc++.h>
#include <map>
#define int long long
using namespace std;

const int N = 200005;

int T = 1;
int a[N], b[N], t, mp[N], sum, ans, maxx, n;

void solve() {
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    for(int i = 1; i <= n; ++i) {
        scanf("%d", &b[i]);
        sum += b[i];
    }
    for(int k = 0; k <= 1000000; ++k)  {
        vector<int> v;
        for(int i = 1; (i - 1) * k <= 1000000 && i <= n; ++i) {
            t = a[i] - (i - 1) * k;  // 避免重复计算
            if(t >= 1 && t < N) {
                if(!mp[t]) v.push_back(t);
                mp[t] += b[i];
                maxx = max(maxx, mp[t]);
            }
        }
        for(auto p : v)
            mp[p] = 0;  // 不能暴力清空，会 TLE
    }
    cout << sum - maxx << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}