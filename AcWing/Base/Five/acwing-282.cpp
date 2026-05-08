// 区间 DP 石子合并
// 用区间分类 + 前缀和
// 区间 DP 问题思路: 先枚举区间长度 在枚举左端点 最后枚举分割点

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 310;

int n;
int s[N]; // 前缀和数组
int f[N][N]; // dp数组

int main()
{
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) scanf("%d", &s[i]);
    
    // 初始化前缀和数组
    for(int i = 1; i <= n; i++) s[i] += s[i - 1];
    
    // 区间长度 从小到大
    for(int len = 2; len <= n; len++)
    {
        // 左端点
        for(int i = 1; i + len - 1 <= n; i++)
        {
            int l = i, r = i + len - 1;
            f[l][r] = 1e9;
            // 分割点
            for(int k = l; k < r; k++)
            {
                f[l][r] = min(f[l][r], f[l][k] + f[k + 1][r] + s[r] - s[l - 1]);
            }
        }
    }
    cout << f[1][n] << endl;
    return 0;
}

