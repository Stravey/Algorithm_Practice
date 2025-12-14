#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int T;
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        sum += a[i];
    }
    if(n == 1) {
        cout << a[0] << endl;
        return;
    }
    long long maxx = *max_element(a.begin(),a.end());
    long long minn = *min_element(a.begin(),a.end());
    long long ans = maxx + n * minn;
    cout << min(ans,sum) << endl;
}
signed main()
{
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}