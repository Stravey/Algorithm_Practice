// 状态压缩 DP
// 蒙德里安的梦想
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 12, M = 1 << N;

bool st[M];
long long f[N][M];

int main()
{
    int n, m;
    while(cin >> n >> m, n || m)
    {
        memset(f, 0, sizeof f);
        
        for(int i = 0; i < 1 << n; i++)
        {
            st[i] = true;
            // 当前段连续0的个数
            int cnt = 0;
            
            for(int j = 0; j < n; j++)
            {
                if(i >> j & 1)
                {
                    if(cnt & 1) 
                    {
                        st[i] = false;
                    }
                    cnt = 0;
                } else {
                    cnt++;
                }
            }
            if(cnt & 1) st[i] = false;
        }
        
        f[0][0] = 1;
        
        for(int i = 1; i <= m; i++)
        {
            for(int j = 0; j < 1 << n; j++)
            {
                f[i][j] = 0;
                for(int k = 0; k < 1 << n; k++)
                {
                    if((j & k) == 0 && st[j | k])
                    {
                        f[i][j] += f[i - 1][k];
                    }
                }
            }
        }
        
        cout << f[m][0] << endl;
    }
    return 0;
}
