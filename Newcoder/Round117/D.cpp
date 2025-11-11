#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int T = 1;
void solve () {
    int n;
    cin >> n;
    vector<vector<int>> edg(n + 1) ;
    vector<int> cnt(n + 1);
    for(int i = 0;i < n - 1;i++) {
        int u,v;
        cin >> u >> v;
        cnt[u]++,cnt[v]++;
        edg[u].push_back(v);
        edg[v].push_back(u);
    }
    int ans = 0;
    for(int i = 1; i <= n;i++) {
        if(cnt[i] == 1) {
            continue;
        } else {
            ans += cnt[i] - 2;
        }
    }
    cout << ans << endl;
}
signed main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}