#include <iostream>
using namespace std;
int T = 1;
void solve() {
    int n,k;
    cin >> n >> k;
    if(k == 0) {
        if(n % 2 != 0) {
            cout << -1 << endl;
            return;
        }
        for(int i = 0;i < n / 2;i++) {
            cout << i + 1 << " " << i + 1 << " ";
        }
        cout << endl;
        return;
    }

    if((n - k) % 2 != 0) {
        cout << -1 << endl;
        return;
    }

    for(int i = 1;i <= k;i++) {
        cout << i << " ";
    }
    int even_val = k + 1;
    for(int i = 0;i < n - k;i++) {
        cout << even_val << " ";
    }
    cout << endl;
}
signed main()
{
    while(T--) {
        solve();
    }
    return 0;
}