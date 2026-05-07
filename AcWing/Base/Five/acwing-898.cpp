// 动态规划入门题
// 数字三角形
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 510, INF = 1e9;

int n;
int a[N][N]; // 每个点的值
int f[N][N]; // 状态

int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // 初始化时要全部初始化 否则有边界问题
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            f[i][j] = -INF;
        }
    }
    
    f[1][1] = a[1][1];
    for(int i = 2; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            f[i][j] = max(f[i - 1][j - 1] + a[i][j], f[i - 1][j] + a[i][j]);
        }
    }
    
    int res = -INF;
    for(int i = 1; i <= n; i++) 
    {
        res = max(res, f[n][i]);
    }
    
    cout << res << endl;
    return 0;
}