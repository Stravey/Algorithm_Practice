#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
int T;
void solve() {
    ll n;
    cin >> n;
    vector<ll> a;
    for(int i = 0;i < n;i++) {
        ll len,cnt;
        cin >> len >> cnt;
        a.push_back(len);
    }
    sort(a.begin(),a.end());
    ll ans = 0;
    int m = a.size();
    for(int k = 2;k < m;k++) {
        int i = 0,j = k - 1;
        while(i < j) {
            if(a[i] + a[j] > a[k]) {
                ans += (j - i);
                j--;
            } else {
                i++;
            }
        }
    }
    cout << ans << endl;
}
signed main() 
{
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}