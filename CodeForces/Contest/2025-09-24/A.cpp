#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }
        bool mark = true;
        for (int i = 0; i < m - 1; ++i) {
            if (a[i + 1] != a[i] + 1) {
                mark = false;
                break;
            }
        }
        int ans = 0;
        if (mark) {
            int end = a.back(); 
            ans = n - end + 1;
        } else {
            ans = 1;
        }
        cout << ans << '\n';
    }
    return 0;
}