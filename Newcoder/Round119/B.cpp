#include <iostream>
#include <vector>
using namespace std;
int T;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int max_val = a[0],min_val = a[0];
    int ans = 0;
    for(int i = 1;i < n;i++) {
        if(a[i] > max_val) {
            max_val = a[i];
        }
        if(a[i] < min_val) {
            min_val = a[i];
        }
    }
    ans = max_val - min_val;
    cout << ans << endl;
}
signed main()
{
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}
