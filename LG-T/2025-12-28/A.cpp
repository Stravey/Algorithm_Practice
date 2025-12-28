#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int T = 1;
// 100%
void solve() {
    int n,m;
    cin >> n >> m;
    bool flag = true;
    vector<int> diff(n + 1);
    for(int i = 1;i <= n;i++) {
        cin >> diff[i];
    }
    for(int i = 1;i <= m;i++) {
        int p,d;
        string s;
        cin >> p >> d >> s;
        if(s == "Completed") {
            diff[p] = d;
        }
    }
    for(int i = 1;i <= n;i++) {
        cout << diff[i];
        if(i < n) {
            cout << " ";
        }
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