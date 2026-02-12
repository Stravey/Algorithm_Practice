#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
int main()
{
    ll n, m, ans = 1e18;
    cin >> n >> m;
    vector<ll> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0;i + m - 1 < n;i++) {
        ans = min(ans, a[i + m - 1] * a[i + m - 1] - a[i] * a[i]);
    }
    cout << ans << endl;
    return 0;
}