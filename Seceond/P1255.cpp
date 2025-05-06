#include <iostream>
using namespace std;

long long n,dp[10001];

// 还要 + 高精度加法  范围为 5000 阶

int main()
{
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    for(long long i = 2;i <= n;i++) 
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n];
    return 0;
}