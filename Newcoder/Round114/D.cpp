#include <iostream>
#include <vector>
using namespace std;
// dp problem 参考了下AI 其实也很简单 dp入门题 但好久没写了 需要极强的递推能力 数学能力
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    vector<long long> dp(n + 1,0);
    dp[1] = a[1];
    for(int i = 2;i <= n;i++) {
        dp[i] = max(dp[i - 1],dp[i - 2] + a[i]);
    }
    cout << dp[n] << endl;
    return 0;
}