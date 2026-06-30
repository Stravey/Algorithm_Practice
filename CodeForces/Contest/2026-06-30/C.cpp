#include <iostream>
#include <algorithm>

#define int long long

using namespace std;

// 思维题 想明白了很简单
// 答案只能是 1 或 2
// 字符串如果出现恰有一次相邻不相等的情况 答案就为 2
// 其余都为 1

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 1; i < n; i++) {
        if(s[i] != s[i - 1]) {
            cnt++;
        }
    }
    
    if(cnt == 1) {
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
    }

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}