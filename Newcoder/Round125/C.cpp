#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
int T;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    ll ans = 0;
    int i = 0;
    while(i < n) {
        if(a[i] > 0) {
            int min_val = a[i];
            i++;
            while(i < n && a[i] > 0) {
                min_val = min(min_val,a[i]);
                i++;
            }
            ans += min_val;
        } else {
            i++;
        }
    }
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}