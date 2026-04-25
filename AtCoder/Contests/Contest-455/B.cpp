#include <iostream>
#include <algorithm>

using namespace std;
const int N = 15;

char g[N][N];

// 判断两个点是否对称
// 模拟题意即可
bool is_same_cell(int h1, int h2, int w1, int w2)
{
    int h = h2 - h1 + 1;
    int w = w2 - w1 + 1;

    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            int t1 = h1 + i;
            int u1 = w1 + j;
            int t2 = h2 - i;
            int u2 = w2 - j;

            if(g[t1][u1] != g[t2][u2])
            {
                return false;
            }
        }
    }

    return true;
}

void solve()
{
    int h, w;
    cin >> h >> w;
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            cin >> g[i][j];
        }
    }

    int cnt = 0;

    // 四重循环遍历两点的横纵坐标
    // 数据量只有 1~10 暴力即可
    for(int i = 0; i < h; i++)
    {
        for(int j = i; j < h; j++) 
        {
            for(int k = 0; k < w; k++)
            {
                for(int z = k; z < w; z++)
                {
                    if(is_same_cell(i, j, k, z)) 
                    {
                        cnt++;
                    }
                }
            }
        }
    }

    cout << cnt << endl;

}

int main()
{
    int T = 1;
    while(T--)
    {
        solve();
    }
    return 0;
}