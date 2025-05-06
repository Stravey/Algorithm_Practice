#include <iostream>
using namespace std;

long long dp[10001];

int main()
{
    int n;
    cin >> n;
    dp[0] = 1;
    dp[1] = 0;
    for(int i = 2;i <= n;i++)
    {
        dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2]); 
    }
    cout << dp[n];
    return 0;
}