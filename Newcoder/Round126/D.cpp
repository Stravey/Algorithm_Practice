#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
using ll = long long;
int T;
void solve() {
    int x,y,n;
    cin >> x >> y >> n;
    vector<int> c(x),d(y);
    vector<int> ans;
    for(int i = 0;i < x;i++) {
        cin >> c[i];
    }
    for(int i = 0;i < y;i++) {
        cin >> d[i];
    }
    if (c[x - 1] != d[y - 1]) {
        cout << -1 << endl;
        return;
    }
    set<int> sc(c.begin(), c.end());
    set<int> sd(d.begin(), d.end());
    for(int v : sc) {
        if(v != c[x - 1] && sd.count(v)) {
            cout << -1 << endl;
            return;
        }
    }
    if(n < x + y - 1) {
        cout << -1 << endl;
        return;
    }
    for(int i = 0; i < x;i++) {
        ans[i] = c[i];
    }
    for(int i = 0;i < y - 1;i++) {
        ans[n - 1 - i] = d[i];
    }
    int maxx = c[x - 1];
    if(n == x + y - 1) {
        ans[x - 1] = maxx;
        for(int i = 0;i < n;i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}