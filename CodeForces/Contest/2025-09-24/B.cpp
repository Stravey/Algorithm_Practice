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
        string s;
        cin >> s;
        set<int> initial_black;
        for (int i = 0; i < m; ++i) {
            int x;
            cin >> x;
            initial_black.insert(x);
        }
        set<int> black(initial_black);
        map<int, int> count;
        int pos = 1;
        count[pos]++;
        
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'A') {
                pos++;
            } else {
                auto it = black.upper_bound(pos);
                if (it == black.end()) {
                    pos++;
                } else {
                    pos = *it + 1;
                }
            }
            count[pos]++;
            black.insert(pos);
        }
        
        cout << black.size() << '\n';
        for (auto it = black.begin(); it != black.end(); ++it) {
            if (it != black.begin()) cout << ' ';
            cout << *it;
        }
        cout << '\n';
    }
    return 0;
}