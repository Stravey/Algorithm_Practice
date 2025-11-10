#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int T = 1;
void solve() {
    int n;
    cin >> n;
    vector<int> cnt(n + 1);
    for(int i = 0;i < n - 1;i++) {
        int u,v;
        cin >> u >> v;
        cnt[u]++;
        cnt[v]++;
    }
    for(int i = 1; i <= n;i++) {
        if(cnt[i] == n - 1) {
            cout << i << endl;
            return;
        }
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