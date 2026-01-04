#include <iostream>
#include <string>
#include <algorithm>
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
    if(n < 3) {
        for(int i = 0;i < n;i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for(int i = 1;i < n - 1;i++) {
        if(a[i] > a[i - 1] && a[i] > a[i + 1]) {
            int new_val = max(a[i - 1],a[i + 1]);
            a[i] = new_val;
        }
    }
    for(int i = 0;i < n;i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
signed main()
{
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}