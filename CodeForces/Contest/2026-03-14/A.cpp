#include <bits/stdc++.h>
using namespace std;

const int N = 105;

int a[N][N];

void solve() {
    int n;
    cin >> n;

    // 特殊情况
    if (n == 1) {
        cout << "No\n";
        return;
    }

    // 统计一下所有糖果对应的颜色出现的次数
    unordered_map<int, int> cnt;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j ++) {
            int color;
            cin >> color;
            cnt[color]++;
        }
    }

    // 找到出现次数最多的颜色 
    int max_color = 0;
    for(const auto & x : cnt) {
        max_color = max(max_color, x.second);
    }

    // 采用鸽巢原理
    // 1. 如果 n 是奇数，最多可以放 n * ((n+1)/2) 个同色糖果
    // 2. 如果 n 是偶数，最多可以放 n * (n/2) 个同色糖果
    int limit = n * ((n + 1) / 2);
    
    if (max_color > 2 * n - 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    while(T--) {
        solve();
    }
    
    return 0;
}