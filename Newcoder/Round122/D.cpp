#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int T;
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    long long s = 0;
    for(int i = 0;i < n;i++) {
        if(a[i] > s + 1) break;
        s += a[i];
    }
    long long m = s + 1;
    long long b = 0;
    int cnt = 0;
    for(int i =0 ;i < n;i++) {
        if(a[i] > m) break;
        if(b < m - 1) {
            b += a[i];
            cnt++;
        } else {
            break;
        }
    }
    cout << n - cnt << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
    while (T--){
        solve();
    }
    return 0;
}