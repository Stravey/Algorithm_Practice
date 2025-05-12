#include <iostream>
using namespace std;

int dp[1000000];
int n,k;
const int s = 100003; 

int main()
{
    cin >> n >> k;
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2;i <= n;i++)
    {
        for(int j = 1;j <= k;j++)
        {
            if(i >= j)
            {
                dp[i] = (dp[i] + dp[i - j]) % s;
            }
        }
    }
    cout << dp[n] % s;
    return 0;
}