#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    if ((a + b) % 2 == 0) {
        cout << "No\n";
        return;
    }

    cout << "Yes\n";
    vector<string> res;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j < n; j++) {
                if (i == a && j == b) continue;
                if (i == a && j+1 == b) continue;
                res.push_back("R");
            }
        } else {
            for (int j = n; j > 1; j--) {
                if (i == a && j == b) continue;
                if (i == a && j-1 == b) continue;
                res.push_back("L");
            }
        }
        if (i < n) res.push_back("D");
    }

    for (auto &c : res) cout << c;
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin >> T; while (T--) solve();
    return 0;
}