#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
const int MOD = 917120411;

int n, m, k, h;
vector<int> a;

bool check(ll target) {
    vector<ll> needs;
    for (int i = 0; i < n; i++) {
        if (a[i] < target) {
            needs.push_back(target - a[i]);
        }
    }
    if (needs.empty()) return true;
    
    sort(needs.begin(), needs.end(), [](ll x, ll y) {
        return x % h > y % h;
    });
    
    ll remain_k = k, remain_m = m;
    
    for (ll need : needs) {
        ll use_k = min(need / h, remain_k);
        need -= use_k * h;
        remain_k -= use_k;
        if (need > remain_m) return false;
        remain_m -= need;
    }
    return true;
}

int main() {
    cin >> n >> m >> k >> h;
    a.resize(n);
    int min_a = 1e9;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        min_a = min(min_a, a[i]);
    }
    
    ll left = min_a, right = min_a + m + (ll)k * h;
    ll ans = min_a;
    
    while (left <= right) {
        ll mid = (left + right) / 2;
        if (check(mid)) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    cout << ans % MOD << endl;
    
    return 0;
}