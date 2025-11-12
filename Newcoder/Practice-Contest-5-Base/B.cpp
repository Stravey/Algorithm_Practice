#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int T = 1;
void solve() {
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int i_count = a[8];
    if(i_count >= 0.8 * m) {
        cout << "Yes" << endl;
        return;
    }
    int i_cnt = 0;
    for(int i = 0;i < n;i++) {
        if(a[i] > i_count) {
            i_cnt++;
        }
    }
    if(i_cnt <= 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
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