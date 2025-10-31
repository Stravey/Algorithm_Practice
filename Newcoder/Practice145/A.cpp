#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
// ¶þ·Ö´ð°¸
int main()
{
    ll n,m,x;
    cin >> n >> m >> x;
    vector<vector<ll>> a(n,vector<ll>(m));
    for(ll i = 0;i < n;i++) {
        for(ll j = 0;j < m;j++) {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    int left = 0;
    int right = n;
    while(left <= right) {
        int mid = (left + right) / 2;
        ll sum = 0;
        for(ll j = 0;j < m;j++) {
            ll max_val = 0;
            for(int i = 0;i < mid;i++) {
                max_val = max(max_val,a[i][j]);
            }
            sum += max_val;
        }
        if(sum <= x) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}