#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> h(n), w(n);
    for(int i = 0;i < n;i++) {
        cin >> h[i] >> w[i];
    }    
    // 找最大边长
    ll r = 0;
    for(int i = 0;i < n;i++) {
        r = max(r, max(h[i], w[i]));
    }
    // 从1开始到最大边长r开始枚举
    ll l = 1, ans = 0;
    while(l <= r) {
        ll mid = (l + r) / 2;
        ll sum = 0;
        for(int i = 0;i < n;i++) {
            // 确保巧克力边长可以切分
            if(mid <= min(h[i], w[i])) {
                // 分别用长和宽整除mid 再相乘计算总共可以有多少个巧克力
                sum += (h[i] / mid) * (w[i] / mid);
            }
        }
        if(sum >= k) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}