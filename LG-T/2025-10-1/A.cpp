#include <bits/stdc++.h>
using namespace std;

inline int cal(const string &s) {
    int cnt = 0;
    for (int i = 0; i + 4 <= s.size(); ++i)
        if (s[i] == 'C' && s[i+1] == 'D' && s[i+2] == 'N' && s[i+3] == 'L')
            ++cnt;
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s, t;
        cin >> s >> t;

        int ans = 0;

        for (int len_s = 1; len_s <= min(m, 4); ++len_s)
            for (int i = 0; i + len_s <= n; ++i) {
                string sub_s = s.substr(i, len_s);

                for (int len_t = 1; len_t <= min(k, 4); ++len_t)
                    for (int j = 0; j + len_t <= n; ++j) {
                        string sub_t = t.substr(j, len_t);
                        ans = max(ans, cal(sub_s + sub_t));
                    }
            }

        cout << ans << '\n';
    }
    return 0;
}