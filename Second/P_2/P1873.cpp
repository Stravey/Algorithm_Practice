#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;

ll a[1000010],n,m;

bool check(ll x) {
    ll sum = 0;
    for(int i = 1;i <= n;i++) {
        if(a[i] > x) {
            sum += a[i] - x;
        }
    }
    return sum >= m;
}

ll find(ll left,ll right) {
    ll ans = 0;
    while(left <= right) {
        ll mid = left + (right - left) / 2;
        if(check(mid)) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;    
}

void solve() {
    cin >> n >> m;
    ll max_height = 0;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
        max_height = max(max_height,a[i]);
    }
    if(max_height == 0 || m == 0) {
        cout << 0 << endl;
    }
    ll result = find(0,max_height);
    cout << result << endl;
}

int main() 
{
    solve();
    return 0;
}