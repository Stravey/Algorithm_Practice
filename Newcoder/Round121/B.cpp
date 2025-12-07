#include <iostream>
#include <vector>
using namespace std;
int T;
// 贪心 + 滚动数组
void solve() {
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int left = 0;
    for(int i = 0;i < n;i++) {
        if(left >= x) {
            left = a[i];
        } else {
            int need = x - left;
            if(a[i] >= need) {
                left = a[i] - need;
            } else {
                cout << "No\n";
                return;
            }
        }
    }
    cout << "Yes\n";
}
signed main()
{
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}