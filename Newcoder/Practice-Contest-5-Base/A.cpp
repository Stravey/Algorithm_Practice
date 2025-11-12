#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int T = 1;
void solve() {
    int n,m;
    cin >> n >> m;
    string s1,s2;
    cin >> s1 >> s2;
    vector<int> dp(n + 1);
    for(int j = 0;j <= m;j++) {
        dp[j] = j;
    }
    for(int i = 1;i <= n;i++) {
        int prev = dp[0];
        dp[0] = i;
        for(int j = 1;j <= m;j++) {
            int temp = dp[j];
            if(s1[i - 1] == s2[j - 1]) {
                dp[j] = prev;
            } else {
                dp[j] = min({prev + 1,dp[j] + 1,dp[j - 1] + 1});
            }
            prev = temp;
        }
    }
    cout << dp[m] << endl;
}
signed main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}