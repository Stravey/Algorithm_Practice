#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;
using ll = long long;
int T = 1;
const int N =100000;
struct node{
    int s;
    int u;
    int t;
    int v;
}a[N];
void solve() {
    ll k,q,ans = 0;
    vector<ll> cnt(k);
    for(int i = 0;i < k;i++) {
        cin >> cnt[i];
    }
    for(int i = 1;i <= q;i++) {
        cin >> a[i].s >> a[i].t >> a[i].t >> a[i].v;
    }
    ans = a[1].s;
    cout << ans << endl;
}
signed main()
{
    while(T--) {
        solve();
    }
    return 0;
}