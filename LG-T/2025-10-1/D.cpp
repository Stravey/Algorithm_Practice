#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        
        vector<int> vis(n + 1, 0);
        int free_count = 0;
        vector<bool> is_free(n + 1, false);
        
        for (int i = 1; i <= n; i++) {
            if (a[i] == 0) {
                free_count++;
                is_free[i] = true;
            }
        }
        
        int fixed_contrib = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i] != 0 && !vis[i]) {
                int u = i;
                while (!vis[u] && a[u] != 0) {
                    vis[u] = i;
                    u = a[u];
                }
                if (a[u] != 0 && vis[u] == i) {
                    int v = u;
                    int len = 0;
                    bool all_fixed = true;
                    do {
                        len++;
                        if (is_free[v]) all_fixed = false;
                        v = a[v];
                    } while (v != u);
                    if (all_fixed) {
                        fixed_contrib += len / __gcd(len, m);
                    }
                }
            }
        }
        
        int ans = fixed_contrib + free_count;
        ans = min(ans, n);
        cout << ans << "\n";
    }
    return 0;
}