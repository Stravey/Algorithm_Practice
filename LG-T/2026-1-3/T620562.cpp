#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using ll = long long;
using namespace std;
int T;
ll min_cost_range(ll r, ll L, ll R, ll cap) {
    if (cap <= 0) return (r == 0 ? 0 : LLONG_MAX);
    ll num_boxes = R - L + 1;
    if (r > num_boxes * cap) return LLONG_MAX; // 放不下
    
    ll a = r / cap;
    ll b = r % cap;
    
    if (a > num_boxes) return LLONG_MAX; // 不应发生
    if (a == num_boxes) {
        // 所有盒子满，b 应为 0
        b = 0;
    }
    
    // 前 a 个盒子放满 cap 个
    // 编号 L .. L+a-1
    ll cost = cap * a * (2*L + a - 1) / 2;
    // 第 a 个盒子（编号 L+a）放 b 个
    if (b > 0) {
        if (L + a > R) return LLONG_MAX; // 不应发生
        cost += (L + a) * b;
    }
    return cost;
}

// 检查能否一次操作后剩余 x 个球
bool can(ll n, ll m, ll k, ll x) {
    // 选中盒子 j 放 x 个球
    for (ll j = 0; j < m; j++) {
        ll r = n - x;
        if (r < 0) continue;
        
        // 容量检查
        ll cap1 = x; // 盒子 0..j-1
        ll cap2 = x - 1; // 盒子 j+1..m-1
        
        ll max_can_put = j * cap1 + (m - j - 1) * cap2;
        if (max_can_put < r) continue; // 放不下剩余球
        
        // 最小代价计算
        // 盒子 j 代价
        ll cost = j * x;
        
        // 放盒子 0..j-1
        ll put1 = min(r, j * cap1);
        cost += min_cost_range(put1, 0, j-1, cap1);
        if (cost > k) continue;
        
        // 放盒子 j+1..m-1
        ll put2 = r - put1;
        if (put2 > 0) {
            cost += min_cost_range(put2, j+1, m-1, cap2);
        }
        if (cost <= k) return true;
    }
    return false;
}
void solve() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m,k;
    cin >> n >> m >> k;
    // 特判
    if(n == 1) {
        cout << 0 << endl;
    }

    // 找最小 x
    ll low = 1, high = n, ans_x = -1;
    while (low <= high) {
        ll mid = (low + high) / 2;
        // 检查能否一次操作后剩余 mid 个球
        bool ok = false;
        // 这里需要保证 mid < n 才可能减少
        if (mid < n) {
            ok = can(n, m, k, mid);
        }
        if (ok) {
            ans_x = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    if (ans_x == -1) {
        cout << "-1\n";
        return;
    }
    
    // 现在模拟操作
    ll steps = 0;
    while (n > 1) {
        // 找最小 x
        ll low = 1, high = n - 1, best = n;
        while (low <= high) {
            ll mid = (low + high) / 2;
            if (can(n, m, k, mid)) {
                best = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if (best >= n) {
            cout << "-1\n";
            return;
        }
        n = best;
        steps++;
    }
    cout << steps << "\n";
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