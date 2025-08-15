// P8707 [蓝桥杯 2020 省 AB1] 走方格
// 动态规划dp
#include <iostream>
using namespace std;
long long n,m,dp[40][40];
int main()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        dp[i][1] = 1;
    }
    for(int j = 1;j <= m;j++) {
        dp[1][j] = 1;
    }
    for(int i = 2;i <= n ;i++) {
        for(int j = 2;j <= m;j++) {
            if(i % 2 == 0 && j % 2 == 0) {
                dp[i][j ] = 0;
            } else {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}