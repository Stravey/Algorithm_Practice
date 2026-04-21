// 走迷宫
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

typedef pair<int, int> PII;

const int N = 105;

int n, m;
int g[N][N];
int d[N][N];
PII q[N * N], Pre[N][N];

int bfs()
{
    int hh = 0, tt = 0;
    q[0] = {0, 0};
    
    memset(d, -1, sizeof d);
    d[0][0] = 0;
    
    while(hh <= tt)
    {
        auto t = q[hh++];
        
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};
        
        for(int i = 0; i < 4; i++) 
        {
            int x = dx[i] + t.first;
            int y = dy[i] + t.second;
            if(x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1)
            {
                d[x][y] = d[t.first][t.second] + 1;
                // 输出路径
                Pre[x][y] = t;
                q[++tt] = {x, y};
            }
            
        }
    
    }

    // 输出路径
    int x = n - 1, y = m - 1;
    while(x || y) 
    {
        cout << x << ' ' << y << endl;
        auto p = Pre[x][y];
        x = p.first;
        y = p.second;
    }
    
    return d[n - 1][m - 1];
}

int main()
{
    cin >> n >> m;
    
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++)
        {
            cin >> g[i][j];
        }
    }
    
    cout << bfs() << endl;
    
    return 0;
}