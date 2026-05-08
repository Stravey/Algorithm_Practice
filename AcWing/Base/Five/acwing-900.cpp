// 整数划分 计数类 DP
// f[i][j] 表示总数为 i 可划分为 j 个数字的和
// 以 被划分的 j 个数中最小值为 1 和 最小值大于 1 划分
// f[i][j] =  f[i - 1][j - 1] + f[i - j][j]

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1010, mod = 1e9 + 7;

int n;
int f[N][N];

int main()
{
    cin >> n;
    f[0][0] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            f[i][j] = (f[i - 1][j - 1] + f[i - j][j]) % mod;
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ans = (ans + f[n][i]) % mod;
    }
    cout << ans << endl;
    return 0;
}
