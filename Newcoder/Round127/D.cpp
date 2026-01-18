#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
using ll = long long;
const int MOD = 998244353;
int T;
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<int,int> cnt;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    vector<pair<int,int>> v;
    for(auto& p : cnt) {
        if(p.second >= 2) {
            v.push_back(p);
        }
    }
    sort(v.begin(),v.end());
    ll ans = 0;
    ll curr = 1;
    for(int m = 1,idx = 0;idx < v.size();m++) {
        if(v[idx].first != m) {
            break;
        }
        ll b = (ll)v[idx].second * (v[idx].second - 1) / 2 % MOD;
        curr = curr * b % MOD;
        ans = (ans + curr) % MOD;
        idx++;
    }
    cout << ans << endl;
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