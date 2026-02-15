#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
using ll = long long;
const int N = 1e9;

bool b[7][7];

void init() {
    memset(b, false, sizeof(b));
    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 6; j++) {
            if(i != j && i + j != 7) {
                b[i][j] = true;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int len = a.size();
    vector<vector<int>> dp(n, vector<int>(7, N));

    // 第 0 个位置
    for (int v = 1; v <= 6; v++) {
        dp[0][v] = (a[0] != v);
    }

    for(int i = 1; i < n;i++) {
        for(int v = 1; v <= 6; v++) {
            for(int u = 1; u <= 6; u++) {
                if(b[u][v]) {
                    dp[i][v] = min(dp[i][v], dp[i - 1][u] + (a[i] != v));
                }
            }
        }
    }

    int ans = N;
    for (int v = 1; v <= 6; v++) {
        ans = min(ans, dp[n - 1][v]);
    }

    cout << ans << endl;
}

int main()
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