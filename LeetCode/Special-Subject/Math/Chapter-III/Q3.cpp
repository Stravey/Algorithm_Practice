#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const int N = 1005,MOD = 1e9 + 7;
ll dp[N][N];
// ¶¯Ì¬¹æ»®
class Solution {
public:
    int rearrangeSticks(int n, int k) {
        dp[0][0] = 1;
        for(int i = 1;i <= n;i++) {
            for(int j = 1;j <= k;j++) {
                dp[i][j] = (dp[i - 1][j - 1] + (i - 1) * dp[i - 1][j]) % MOD;
            }
        }
        return dp[n][k];
    }
};
int main()
{
    return 0;
}