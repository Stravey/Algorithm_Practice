#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int c[1005];

struct {
    int type; // pepper type
    int limit; // capacity
}a[1005];

void solve() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> c[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> a[i].type >> a[i].limit;
    }
    vector<vector<int>> b(m + 1);
    // 按照辣椒种类分类
    for(int i = 0; i < n; i++) {
        b[a[i].type].push_back(a[i].limit);
    }

    int ans = 0;
    for(int j = 1; j <= m; j++) {
        sort(b[j].rbegin(), b[j].rend());

        int remains = c[j - 1];

        for(int x : b[j]) {
            if(remains <= 0) break;
            int used = min(remains, x);
            ans += used;
            remains -= used;
        }

    }
    cout << ans << endl;
}

int main()
{
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}