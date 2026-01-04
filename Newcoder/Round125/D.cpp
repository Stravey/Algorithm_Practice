#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
int T;
void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    string s1,s2;
    cin >> s1 >> s2;
    // 计算s1串的异或和
    int xor_s1 = 0;
    for(auto c : s1) {
        xor_s1 ^= (c - '0');
    }
    // 计算s2串的异或和
    int xor_s2 = 0;
    for(auto c : s2) {
        xor_s2 ^= (c - '0');
    }
    if(xor_s1 != xor_s2) {
        cout << "NO" << endl;
        return;
    }
    
    if(m == 1) {
        cout << "YES" << endl;
        return;
    }

    int curr = s2[0] - '0';
    int matched = 0;
    int prefix_xor = 0;

    for(int i = 0;i < n - 1;i++) {
        prefix_xor ^= (s1[i] - '0');
        if(matched < m - 1 && prefix_xor == curr) {
            ++matched;
            if(matched == m - 1) {
                cout << "YES" << endl;
                return;
            }
            curr ^= (s2[matched] - '0');
        }
    }
    cout << "NO" << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}